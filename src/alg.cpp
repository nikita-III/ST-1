// Copyright 2025 UNN-CS
#include <cstdint>
#include <stdexcept>
#include "alg.h"

bool checkPrime(uint64_t val) {
  if (val < 2) {
    return false;
  }
  if (val == 2 || val == 3) {
    return true;
  }
  if (val % 2 == 0 || val % 3 == 0) {
    return false;
  }
  for (std::size_t i = 5; i * i <= val; i += 2) {
    if (val % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    throw std::invalid_argument("n-invalid");
  }
  if (n == 1) {
    return 2;
  }

  uint64_t cnt = 1;
  uint64_t close = 3;

  while (cnt < n) {
    if (checkPrime(close)) {
      cnt++;
      if (cnt == n) {
        return close;
      }
    }
    close += 2;
  }
  return 2;
}

uint64_t nextPrime(uint64_t val) {
  if (val < 2) {
    return 2;
  }

  uint64_t closest = val + 1;

  if (closest % 2 == 0) {
    closest++;
  }

  while (!checkPrime(closest)) {
    closest += 2;
  }

  return closest;
}

uint64_t sumPrime(uint64_t upper) {
  if (upper <= 2) {
    return 0;
  }

  uint64_t sum = 2;

  for (uint64_t i = 3; i < upper; i += 2) {
    if (checkPrime(i)) {
      sum += i;
    }
  }

  return sum;
}