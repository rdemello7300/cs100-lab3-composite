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

#endif //__POW_TEST_HPP__
