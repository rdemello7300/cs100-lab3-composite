#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(AddTest, OpEvaluateNonZero) {
    Base* num1 = new Op(10);
    Base* num2 = new Op(3);
    Sub* test = new Sub(num1, num2);
    EXPECT_EQ(test->evaluate(), 7);
}

#endif //__SUB_TEST_HPP__
