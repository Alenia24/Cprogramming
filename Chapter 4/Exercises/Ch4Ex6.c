/*
  Section 4.1
  What is the value of each of the following expressions in C99?
  (Give all possible values if an expression may have more than one value.)
  
  (a) 8 % 5
  (b) -8 % 5
  (c) 8 % -5
  (d) -8 % -5
*/

#include <stdio.h>

int main(void) {

  printf("(a) %d\n", 8 % 5);
  printf("(b) %d\n", -8 % 5);
  printf("(c) %d\n", 8 % -5);
  printf("(d) %d\n", -8 % -5);

  return 0;
}

/*
  Output:
  (a) 3
  (b) -3
  (c) 3 
  (d) -3 
*/
