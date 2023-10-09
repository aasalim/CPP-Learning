#include <gtest/gtest.h>
extern "C"
{
#include <stdio.h>
}

TEST(SampleTest, PrintHelloWorld)
{
    char buffer[12];
    sprintf(buffer, "Hello World");
    EXPECT_STREQ("Hello World", buffer);
}