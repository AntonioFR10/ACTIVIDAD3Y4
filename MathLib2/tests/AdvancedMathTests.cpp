#include <gtest/gtest.h>
#include "AdvancedMath.h"

TEST(AdvancedMathTest, Factorial) {
    EXPECT_EQ(AdvancedMath::factorial(5), 120);
    EXPECT_EQ(AdvancedMath::factorial(0), 1);
}

TEST(AdvancedMathTest, Combination) {
    EXPECT_EQ(AdvancedMath::combination(5, 2), 10);
    EXPECT_EQ(AdvancedMath::combination(5, 5), 1);
}
