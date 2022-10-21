/*
  Section 2.4
  Write a program that declares several int and float varialbes- without 
  initializing them- and then prints their values. Is there any pattern to the values?
  (Ususally there isn't)
*/

#include <stdio.h>

int main (void) 
{
  int a, b, c;
  float d, e, f;

  printf("The value of variable a is: %d\n", a);
  printf("The value of variable b is: %d\n", b);
  printf("The value of variable c is: %d\n", c);

  printf("The value of variable d is: %f\n", d);
  printf("The value of variable e is: %f\n", e);
  printf("The value of variable f is: %f\n", f);

  return 0;
}

/* 
  The values printed depend on many factors, output is most likely to be different each 
  time it is run.
  Output:
  The value of variable a is: 0
  The value of variable b is: 8
  The value of variable c is: 431
  The value of variable d is: 0.000000
  The value of variable e is: 0.000000
  The value of variable f is: 0.000000
*/
