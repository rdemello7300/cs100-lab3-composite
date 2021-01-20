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

#endif //__MULT_TEST_HPP__

