#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, OpEvaluateNonZero) {
    Base* num1 = new Op(14);
    Base* num2 = new Op(4);
    Sub* test = new Sub(num1, num2);
    EXPECT_EQ(test->evaluate(), 10);
    EXPECT_EQ(test->stringify(), "(14.000000 - 4.000000)");
}

TEST(SubTest2, SubWithSub) {
    Base* num1 = new Op(14);
    Base* num2 = new Op(4);
    Base* num3 = new Op(4);
    Base* test = new Sub(num1, num2);
    Base* test2 = new Sub(test, num3);
    EXPECT_EQ(test2->evaluate(), 6);
    EXPECT_EQ(test2->stringify(), "((14.000000 - 4.000000) - 4.000000)");
}

TEST(SubTest3, SubWithSubWithZero) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(6);
    Base* num3 = new Op();
    Base* test = new Sub(num1, num2);
    Base* test2 = new Sub(test, num3);
    EXPECT_EQ(test2->evaluate(), -1);
    EXPECT_EQ(test2->stringify(), "((5.000000 - 6.000000) - 0.000000)");
}

TEST(SubTest4, SubWithNegatives) {
    Base* num1 = new Op(-4);
    Base* num2 = new Op(6);
    Base* test = new Sub(num1, num2);
    EXPECT_EQ(test->evaluate(), -10);
    EXPECT_EQ(test->stringify(), "(-4.000000 - 6.000000)");
}

#endif //__SUB_TEST_HPP__
