#include <gtest/gtest.h>
#include "shapes_utils.h"
#include <cmath>

// Test for rectangle area
TEST(rectangle_test, BasicAssertions) {
    // Area of a rectangle with width 3.0 and height 2.0 = 6.0
    double rect_res = rectangle_area(3.0, 2.0);
    EXPECT_NEAR(rect_res, 6.0, 0.01);
}

// Test for triangle area
TEST(triangle_test, BasicAssertions){
    // Area of a rectangle with base 3.0 and height 2.0 = 3.0
    double triangle_res = triangle_area(3.0, 2.0);
    EXPECT_NEAR(triangle_res, 3.0, 0.01);
}

// Test for circle area
TEST(circle_test, BasicAssertions) {
    // Area of a circle with radius 3.0 = 28.2743
    double circle_res = circle_area(3.0);
    EXPECT_NEAR(circle_res, 28.2743, 0.01);
}




