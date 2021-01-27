#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, OpEvaluateNonZero) {
    Base* test = new Rand();
    EXPECT_EQ(test->evaluate(), test -> evaluate());
    EXPECT_EQ(test-> stringify() , test-> stringify());
}



#endif //__RAND_TEST_HPP__

