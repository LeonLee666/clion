#include <gtest/gtest.h>

#include <add.h>

TEST(case1,test1)
{
    ASSERT_TRUE(true);
    ASSERT_EQ(add(1,2),3);
}
