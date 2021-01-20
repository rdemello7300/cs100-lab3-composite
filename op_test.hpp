#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest1, OpEvaluateNonZero) {
    SevenOpMock* test = new SevenOpMock();
    EXPECT_EQ(test->evaluate(), 7.5);
}


TEST(NegOpTest, OpEvaluateNonZero) {
    NegOpMock* test = new NegOpMock();
    EXPECT_EQ(test->evaluate(), -7.5);
}



#endif //__OP_TEST_HPP__
