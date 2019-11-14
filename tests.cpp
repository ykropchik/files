//
// Created by YKROPCHIK on 14.11.2019.
//

#include "gtest/gtest.h"
#include "lib.h"

TEST(isPalindrom, expectedResult){
    char* input = new char [100];

    EXPECT_EQ(palindromeCheck(strcpy(input, "red rum sir is murder")), true);
    EXPECT_EQ(palindromeCheck(strcpy(input, "false")), false);
    EXPECT_EQ(palindromeCheck(strcpy(input, "top spot")), true);
    EXPECT_EQ(palindromeCheck(strcpy(input, "hotel sdelat na russian, but don't work, because f*cking russian encoding in 2 bytes")), false);
    EXPECT_EQ(palindromeCheck(strcpy(input, "and one more test")), false);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}