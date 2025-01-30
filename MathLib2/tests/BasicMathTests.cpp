#include <gtest/gtest.h>
#include "BasicMath.h"

TEST(BasicMathTest, Addition) {
    EXPECT_EQ(BasicMath::add(2, 3), 5);
}

TEST(BasicMathTest, Subtraction) {
    EXPECT_EQ(BasicMath::subtract(10, 3), 7);
}

TEST(BasicMathTest, Multiplication) {
    EXPECT_EQ(BasicMath::multiply(4, 5), 20);
}

TEST(BasicMathTest, Division) {
    EXPECT_EQ(BasicMath::divide(8, 2), 4);
    EXPECT_EQ(BasicMath::divide(8, 0), 0);  // Manejo de división por 0
}
