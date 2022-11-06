/*
If i and j are positive integers, does (-i) / j always have the same value as -(i / j)?
Justify your answer.
*/

#include <stdio.h>

int main(void) {
  int i = 9, j = 3, result;

  result = (-i) / j;
  printf("%d\n", result);

  result = -(i / j);
  printf("%d", result);

  return 0;
}

/*
  Output: 
  -3
  -3
  
  Answer:
   Using C89 the values would be different. Howevever, using C00 the values would be the same.
*/

