/*
  Extend the program in Programming Project 1 to handle 
  three-digits.
*/

#include <stdio.h>

int main(void) {

  int number;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  printf("The reversal: %d%d%d", number % 10, number / 10 % 10 , number / 100);

  return 0;
}

/*
  Output:
  Enter a two-digit number: 234
  The reversal: 432
*/
