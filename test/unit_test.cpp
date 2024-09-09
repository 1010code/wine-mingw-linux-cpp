#include <gtest/gtest.h>


int PublicSum(int a, int b)
{
    return a + b;
}


TEST(PublicSum, test1)
{
    int result = PublicSum(2, 3);
    EXPECT_EQ(result, 5);
}


// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
