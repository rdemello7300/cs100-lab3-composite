#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include <iostream>
using namespace std;

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest2, OpEvaluateNoInput) {
    Op* test = new Op();
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest3, OpEvaluateNeg) {
    Op* test = new Op(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(OpTest4, OpString) {
    Op* test = new Op(2);
    EXPECT_EQ(test->stringify(), "2.000000");
}

TEST(OPMockTest, testing){
   SevOpMock* test = new SevOpMock();
   EXPECT_EQ(test-> evaluate(), 7.5);
}


#endif //__OP_TEST_HPP__
