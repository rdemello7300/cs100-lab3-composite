#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, OpEvaluateNonZero) {
    Base* num1 = new Op(12);
    Base* num2 = new Op(6);
    Div* test = new Div(num1, num2);
    EXPECT_EQ(test->evaluate(), 2);
}

#endif //__DIV_TEST_HPP__
