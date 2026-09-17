#include <gtest/gtest.h>
#include "Square.h"

TEST(SquareTest, CalculateAreaPositiveSide) {
    Square sq(4.0);
    EXPECT_DOUBLE_EQ(sq.calculateArea(), 16.0);
}

TEST(SquareTest, CalculateAreaZeroSide) {
    Square sq(0.0);
    EXPECT_DOUBLE_EQ(sq.calculateArea(), 0.0);
}

TEST(SquareTest, CalculateAreaNegativeSide) {
    Square sq(-3.0);
    EXPECT_DOUBLE_EQ(sq.calculateArea(), 9.0);
}

TEST(SquareTest, CalculateAreaDecimalSide) {
    Square sq(2.5);
    EXPECT_DOUBLE_EQ(sq.calculateArea(), 6.25);
}

TEST(SquareTest, GetName) {
    Square sq(5.0);
    EXPECT_STREQ(sq.getName(), "Square");
}
