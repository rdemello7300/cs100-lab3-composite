#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, OpEvaluateNonZero) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Mult* test = new Mult(num1, num2);
    EXPECT_EQ(test->evaluate(), 21);
}

TEST(MultTest2, MultWithMult) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Base* num3 = new Op(2);
    Base* test = new Mult(num1, num2);
    Base* test2 = new Mult(test, num3);
    EXPECT_EQ(test2->evaluate(), 42);
}

TEST(MultTest3, MultWithMultByZero) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Base* num3 = new Op();
    Base* test = new Mult(num1, num2);
    Base* test2 = new Mult(test, num3);
    EXPECT_EQ(test2->evaluate(), 0);
}

TEST(MultTest4, MultWithNegatives) {
    Base* num1 = new Op(-7);
    Base* num2 = new Op(3);
    Base* test = new Mult(num1, num2);
    EXPECT_EQ(test->evaluate(), -21);
}


#endif //__MULT_TEST_HPP__

