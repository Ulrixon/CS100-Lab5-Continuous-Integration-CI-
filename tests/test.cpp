#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(TestRectangle, TestConstructor)
{
    Rectangle *rect1 = new Rectangle(1, 1);
    EXPECT_EQ(1, rect1->width);
    EXPECT_EQ(1, rect1->height);
}

TEST(TestRectangle, TestArea)
{
    Rectangle *rect1 = new Rectangle(1, 1);
    EXPECT_EQ(1, rect1->area());

}

TEST(TestRectangle, TestArea)
{
    Rectangle *rect1 = new Rectangle(1, 1);
    EXPECT_EQ(4, rect1->perimeter());

}