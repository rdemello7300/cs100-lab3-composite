#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, OpEvaluateNonZero) {
    Base* num1 = new Op(11);
    Base* num2 = new Op(4);
    Add* test = new Add(num1, num2);
    EXPECT_EQ(test->evaluate(), 15);
}

TEST(AddTest2, AddWithAdd) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(6);
    Base* num3 = new Op(3);
    Base* test = new Add(num1, num2);
    Base* test2 = new Add(test, num3);
    EXPECT_EQ(test2->evaluate(), 14);
}

TEST(AddTest3, AddWithAddWithZero) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(6);
    Base* num3 = new Op();
    Base* test = new Add(num1, num2);
    Base* test2 = new Add(test, num3);
    EXPECT_EQ(test2->evaluate(), 11);
}

TEST(AddTest4, AddWithNegatives) {
    Base* num1 = new Op(5);
    Base* num2 = new Op(-11);
    Base* test = new Add(num1, num2);
    EXPECT_EQ(test->evaluate(), -6);
}


#endif //__ADD_TEST_HPP__
