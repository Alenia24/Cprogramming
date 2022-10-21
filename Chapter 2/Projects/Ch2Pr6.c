/*
  Modify the program of Programming 5 so that the polynomial is 
  evaluated using the following formula:
  ((((3x + 2)x - 5)x - 1)x + 7)x - 6
  Note that the modified program performs fewer multiplications.
  This technique for evaluating polynomials is known as Horner's 
  Rule.  
*/

#include <stdio.h>

int main (void)
{
  int x, value;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The value of the polynomial when %d is entered is: %d", x, value);

  return 0;
}

/*
  Output:(when x = 2)
  Enter the value of x: 2
  The value of the polynomial when 2 is entered is: 92
*/
