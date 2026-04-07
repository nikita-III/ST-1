// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, 0_no) {
  bool res = checkPrime(0);
  EXPECT_FALSE(res);
}
TEST(st1, 1_no) {
  bool res = checkPrime(1);
  EXPECT_FALSE(res);
}
TEST(st1, 4_no) {
  bool res = checkPrime(4);
  EXPECT_FALSE(res);
}
TEST(st1, 5_yes) {
  bool res = checkPrime(5);
  EXPECT_TRUE(res);
}
TEST(st1, 23_yes) {
  bool res = checkPrime(23);
  EXPECT_TRUE(res);
}
TEST(st1, 97_yes) {
  bool res = checkPrime(97);
  EXPECT_TRUE(res);
}
TEST(st1, 100_no) {
  bool res = checkPrime(100);
  EXPECT_FALSE(res);
}


TEST(st1, n_0) {
  EXPECT_ANY_THROW(nPrime(0));
}
TEST(st1, n_1) {
  uint64_t res = nPrime(1);
  EXPECT_EQ(2, res);
}
TEST(st1, n_4) {
  uint64_t res = nPrime(4);
  EXPECT_EQ(7, res);
}
TEST(st1, n_5) {
  uint64_t res = nPrime(5);
  EXPECT_EQ(11, res);
}
TEST(st1, n_10) {
  uint64_t res = nPrime(10);
  EXPECT_EQ(29, res);
}
TEST(st1, n_23) {
  uint64_t res = nPrime(23);
  EXPECT_EQ(83, res);
}


TEST(st1, next_0) {
  uint64_t res = nextPrime(0);
  EXPECT_EQ(2, res);
}
TEST(st1, next_1) {
  uint64_t res = nextPrime(1);
  EXPECT_EQ(2, res);
}
TEST(st1, next_4) {
  uint64_t res = nextPrime(4);
  EXPECT_EQ(5, res);
}
TEST(st1, next_5) {
  uint64_t res = nextPrime(5);
  EXPECT_EQ(7, res);
}
TEST(st1, next_23) {
  uint64_t res = nextPrime(23);
  EXPECT_EQ(29, res);
}


TEST(st1, sum_0) {
  uint64_t res = sumPrime(0);
  EXPECT_EQ(0, res);
}
TEST(st1, sum_1) {
  uint64_t res = sumPrime(1);
  EXPECT_EQ(0, res);
}
TEST(st1, sumt_4) {
  uint64_t res = sumPrime(4);
  EXPECT_EQ(5, res);
}
TEST(st1, sum_5) {
  uint64_t res = sumPrime(5);
  EXPECT_EQ(5, res);
}
TEST(st1, sum_23) {
  uint64_t res = sumPrime(23);
  EXPECT_EQ(77, res);
}
TEST(st1, sum_30) {
  uint64_t res = sumPrime(30);
  EXPECT_EQ(129, res);
}
