#include <stdio.h>

/*
    Task:
    Write a function long long factorial(int n) that computes
    the factorial of n using a loop (not recursion).

    In main():
      - Ask user for a non-negative integer n
      - If n < 0, print an error
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: n must be >= 0\n");
  } else {
    long long result = factorial(n);
    printf("%d! = %lld\n", n, result);
  }

  return 0;
}
