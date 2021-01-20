#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, OpEvaluateNonZero) {
    Rand* test = new Rand();
    double r = rand() % 100;
    EXPECT_EQ(test->evaluate(), r);
}


#endif //__RAND_TEST_HPP__

