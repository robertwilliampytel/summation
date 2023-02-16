#include <stdio.h>

unsigned long long summation(unsigned long long);

int main() {

  unsigned long long n = 0;

  scanf("%llu", &n);

  n = summation(n);

  printf("%llu\n", n);

  return 0;
}


unsigned long long summation(unsigned long long from_one_to_N) {

  if (from_one_to_N <= 1) { return 1; }

  return from_one_to_N + summation(from_one_to_N - 1);
}
