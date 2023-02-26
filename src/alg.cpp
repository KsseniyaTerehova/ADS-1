// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
  std::int64_t count_d = 0;
  for (std::int64_t i = 2; i <= std::sqrt(value); i++) {
    if (value % i == 0) {
      ++count_d;
    }
  }
  if (count_d == 0) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  const std::int64_t SIZE = 10000;
  std::int64_t a[SIZE] = { 0 };
  std::int64_t j = 0;
  for (int i = 2; i < 10000; i++) {
    if (checkPrime(i)) {
      a[j] = i;
      j++;
    }
  }
  for (int i = 0; i < SIZE; i++) {
    if (n - 1 == i) {
      return a[i];
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  const std::int64_t SIZE = 10000;
  std::int64_t a[SIZE] = { 0 };
  std::int64_t j = 0;
  for (int i = 2; i < 10000; i++) {
    if (checkPrime(i)) {
      a[j] = i;
      j++;
    }
  }
  for (int i = 0; i < 10000; i++) {
    if (a[i] == value) {
      return a[i + 1];
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  std::int64_t sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum = += i;
    }
  }
  return sum;
}
