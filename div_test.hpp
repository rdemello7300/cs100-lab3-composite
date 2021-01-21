#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, OpEvaluateNonZero) {
    Base* num1 = new Op(12);
    Base* num2 = new Op(6);
    Div* test = new Div(num1, num2);
    EXPECT_EQ(test->evaluate(), 2);
    EXPECT_EQ(test->stringify(), "(12.000000 / 6.000000)");
}

TEST(DivTest2, OpEvaluateZero) {
    Base* num1 = new Op();
    Base* num2 = new Op(2);
    Div* test = new Div(num1, num2);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "(0.000000 / 2.000000)");
}

TEST(DivTest3, DivTestWithThreeOp) {
    Base* num1 = new Op(36);
    Base* num2 = new Op(2);
    Base* num3 = new Op(3);
    Base* val = new Div(num1, num2);
    Base* test = new Div(val, num3);
    EXPECT_EQ(test->evaluate(), 6);
    EXPECT_EQ(test->stringify(), "((36.000000 / 2.000000) / 3.000000)");
}

TEST(DivMockTest, testing){
   DivOpMock* sev1 = new DivOpMock();
   DivOpMock* sev2 = new DivOpMock();
   Base* test = new Div(sev1, sev2);
   EXPECT_EQ(test-> evaluate(), 1);
}


#endif //__DIV_TEST_HPP__
