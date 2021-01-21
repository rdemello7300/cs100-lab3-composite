#include "gtest/gtest.h"

#include "op_test.hpp"
#include "add_test.hpp"
#include "rand_test.hpp"
#include "mult_test.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"

TEST(Testing, MultipleClass) {
    Base* num1 = new Op(7);
    Base* num2 = new Op(3);
    Base* test = new Mult(num1, num2);
    Base* test2 = new Add(test, num2);
    EXPECT_EQ(test2 ->evaluate(), 24);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
