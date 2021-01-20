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

#endif //__ADD_TEST_HPP__
