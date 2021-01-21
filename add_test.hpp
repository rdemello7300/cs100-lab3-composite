#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, OpEvaluateNonZero) {
    Base* num1 = new Op(11);
    Base* num2 = new Op(4);
    Add* test = new Add(num1, num2);
    EXPECT_EQ(test->evaluate(), 15);
    EXPECT_EQ(test->stringify(), "(11.000000 + 4.000000)");
}

TEST(AddTest2, Adding3Op) {
    Base* num1 = new Op(11);
    Base* num2 = new Op(4);
    Base* num3 = new Op(2);
    Base* val = new Add(num1, num2);
    Base* test = new Add(val, num3);
    EXPECT_EQ(test->evaluate(), 17);
    EXPECT_EQ(test->stringify(), "((11.000000 + 4.000000) + 2.000000)");
}

TEST(AddTest3, Adding3OpWithZero) {
    Base* num1 = new Op(9);
    Base* num2 = new Op();
    Base* num3 = new Op(3);
    Base* val = new Add(num1, num2);
    Base* test = new Add(val, num3);
    EXPECT_EQ(test->evaluate(), 12);
    EXPECT_EQ(test->stringify(), "((9.000000 + 0.000000) + 3.000000)");
}


TEST(AddTest4, AddWithNegatives) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(-11);
    Base* test = new Add(num1, num2);
    EXPECT_EQ(test->evaluate(), -6);
}


#endif //__ADD_TEST_HPP__
