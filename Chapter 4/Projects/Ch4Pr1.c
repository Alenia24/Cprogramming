/*
  Write a program that asks the user to enter a two-digit number, then prints
  the number with its digits reversed. A session with the program should have
  the following appearance:
  Enter a two-digit number: 28
  The reversal: 82
*/

#include <stdio.h>

int main(void) {

  int number;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);



  printf("The reversal: %d%d", number % 10, number / 10);

  return 0;
}

/*
  Output:
  Enter a two-digit number: 28
  The reversal: 82
*/
