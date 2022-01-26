/*Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to ‘n’. (Hint: Fibonacci series: 0 1 1 2 3 5 8 13 21 …)*/

#include <stdio.h>
int main() {
  int fib1 = 0, fib2 = 1, fib3=0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  // displays the first two terms which is always 0 and 1
  printf("Fibonacci Series: %d, %d, ", fib1, fib2);
  fib3 = fib1 + fib2;

  while (fib3 <= n) {
    printf("%d, ", fib3);
    fib1 = fib2;
    fib2 = fib3;
    fib3 = fib1 + fib2;
  }

  return 0;
}
