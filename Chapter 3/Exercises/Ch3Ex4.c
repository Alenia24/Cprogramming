/*
  Section 3.2
  Suppose that we call scanf as follows:
  scanf("%d%f%d", &i, &x, &j);

  If the user enters
  10.3 5 6

  what will be the values of i, x and j after the call? 
  (Assume that i and j are int variables and x is a float variable.)
*/

#include <stdio.h>

int main(void) {

  int i, j;
  float x;

  scanf("%d%f%d", &i, &x, &j);
  printf("%d %f %d", i, x, j);
  return 0;
}

/*
  Output:
  10 0.300000 5
  
  Explanation:
  Integers are numbers without decimal point. when the input is enter 10 is accected as the integer,
  the next character "." is determined to be a decimal point which signifies float and is accepted as the float, C prints decimals 
  to six places after the decimal and adds zeros where needed. 5 is read as the next integer. At this point all variables have been 
  accounted for and the program terminates. 
*/
