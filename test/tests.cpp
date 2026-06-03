// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Проверка checkPrime
TEST(PrimeTest, CheckPrime) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeTest, CheckPrime1) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
}

TEST(PrimeTest, CheckPrime2) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(6));
}

TEST(PrimeTest, CheckPrime3) {
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(9));
}

TEST(PrimeTest, CheckPrime4) {
    EXPECT_FALSE(checkPrime(15));
    EXPECT_TRUE(checkPrime(17));
}

TEST(PrimeTest, CheckPrime5) {
    EXPECT_FALSE(checkPrime(25));
    EXPECT_TRUE(checkPrime(97));
}

TEST(PrimeTest, CheckPrime6) {
    EXPECT_FALSE(checkPrime(100));
}

// Проверка nPrime
TEST(PrimeTest, NPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(10), 29);
}

// Проверка nextPrime
TEST(PrimeTest, NextPrime) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(12), 13);
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(20), 23);
}

// Проверка sumPrime
TEST(PrimeTest, SumPrime) {
    EXPECT_EQ(sumPrime(2), 0);      // нет простых чисел < 2
    EXPECT_EQ(sumPrime(3), 2);      // 2
    EXPECT_EQ(sumPrime(10), 17);    // 2+3+5+7 = 17
    EXPECT_EQ(sumPrime(20), 77);    // 2+3+5+7+11+13+17+19 = 77
    EXPECT_EQ(sumPrime(30), 129);   // 2+3+5+7+11+13+17+19+23+29 = 129
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
