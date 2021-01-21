#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, OpEvaluateNonZero) {
    Base* num1 = new Op(2);
    Base* num2 = new Op(5);
    Pow* test = new Pow(num1, num2);
    EXPECT_EQ(test->evaluate(), 32);
}

TEST(PowTest2, PowWithPow) {
    Base* num1 = new Op(2);
    Base* num2 = new Op(3);
    Base* num3 = new Op(2);
    Base* test = new Pow(num1, num2);
    Base* test2 = new Pow(test, num3);
    EXPECT_EQ(test2->evaluate(), 64);
    EXPECT_EQ(test2->stringify(), "((2.000000 ** 3.000000) ** 2.000000)");
}

TEST(PowTest3, PowWithPowWithZero) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(2);
    Base* num3 = new Op();
    Base* test = new Pow(num1, num2);
    Base* test2 = new Pow(test, num3);
    EXPECT_EQ(test2->evaluate(), 1);
    EXPECT_EQ(test2->stringify(), "((5.000000 ** 2.000000) ** 0.000000)");
}

TEST(PowTest4, PowWithNegatives) {
    Base* num1 = new Op(2);
    Base* num2 = new Op(-3);
    Base* test = new Pow(num1, num2);
    EXPECT_EQ(test->evaluate(), 1.0/8.0);
}

TEST(PowMockTest, testing){
   PowOpMock* sev1 = new PowOpMock();
   PowOpMock* sev2 = new PowOpMock();
   Base* test = new Pow(sev1, sev2);
   EXPECT_EQ(test-> evaluate(), pow(sev1, sev1));
}

#endif //__POW_TEST_HPP__
