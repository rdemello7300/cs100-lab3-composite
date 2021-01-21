#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, OpEvaluateNonZero) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Mult* test = new Mult(num1, num2);
    EXPECT_EQ(test->evaluate(), 21);
    EXPECT_EQ(test->stringify(), "(7.000000 * 3.000000)");
}

TEST(MultTest2, MultWithMult) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Base* num3 = new Op(2);
    Base* test = new Mult(num1, num2);
    Base* test2 = new Mult(test, num3);
    EXPECT_EQ(test2->evaluate(), 42);
    EXPECT_EQ(test2->stringify(), "((7.000000 * 3.000000) * 2.000000)");
}

TEST(MultTest3, MultWithMultByZero) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Base* num3 = new Op();
    Base* test = new Mult(num1, num2);
    Base* test2 = new Mult(test, num3);
    EXPECT_EQ(test2->evaluate(), 0);
    EXPECT_EQ(test2->stringify(), "((7.000000 * 3.000000) * 0.000000)");
}

TEST(MultTest4, MultWithNegatives) {
    Base* num1 = new Op(-7);
    Base* num2 = new Op(3);
    Base* test = new Mult(num1, num2);
    EXPECT_EQ(test->evaluate(), -21);
}

TEST(MultMockTest, testing){
   MultOpMock* sev1 = new MultOpMock();
   MultOpMock* sev2 = new MultOpMock();
   Base* test = new Mult(sev1, sev2);
   EXPECT_EQ(test-> evaluate(), 56.25);
}


#endif //__MULT_TEST_HPP__

