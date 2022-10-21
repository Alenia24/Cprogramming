/*
  Write a program that asks the user to enter a value for x
  and then displays the value of the following polynomial:
  3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
  
  Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by
  itself repeatedly in order to compute the powers of x. (For example, x * x * x is cubed.)
*/

#include <stdio.h>

int main (void)
{
  int x, value;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  value = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

  printf("The value of the polynomial when %d is entered is: %d", x, value);

  return 0;
}

/* 
  Output:(if x = 2)
  Enter the value of x: 2
  The value of the polynomial when 2 is entered is: 92
*/
