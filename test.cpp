#include <gtest/gtest.h>

#define main program_main
#include "lab05_4.cpp"
#undef main

TEST(S_Test, N1)
{
    double exp = 0.546302;
    EXPECT_NEAR(S0(1),       exp, 0.00001);
    EXPECT_NEAR(S1(1, 1),    exp, 0.00001);
    EXPECT_NEAR(S2(1, 1),    exp, 0.00001);
    EXPECT_NEAR(S3(1, 1, 0), exp, 0.00001);
    EXPECT_NEAR(S4(1, 1, 0), exp, 0.00001);
}