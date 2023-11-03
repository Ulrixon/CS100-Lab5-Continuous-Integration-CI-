#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(RectangleTests, TestConstructor)
{
    Rectangle *recttest = new Rectangle(1, 1);
    EXPECT_EQ(1, recttest->get_width());
    EXPECT_EQ(1, recttest->get_height());
}

TEST(RectangleTests, TestArea)
{
    Rectangle *recttest = new Rectangle(1, 1);
    EXPECT_EQ(1, recttest->area());

}

TEST(RectangleTests, TestPerimeter)
{
    Rectangle *recttest = new Rectangle(1, 1);
    EXPECT_EQ(4, recttest->perimeter());

}

int runTests(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}