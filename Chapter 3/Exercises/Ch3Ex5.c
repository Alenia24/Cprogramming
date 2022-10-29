/*
  Section 3.2
  Suppose that we call scanf as follows:
  scanf("%f%d%f", &x, &i, &y);
  
  If the user enters
  12.3 45.6 789
  
  what will be the values of x, i and y after the call? 
  (Assume that x and y are float variables and i is an int variable.)  
*/

#include <stdio.h>

int main(void) {
  float x, y;
  int i;

  scanf("%f%d%f", &x, &i, &y);

  printf("%f %d %f", x, i, y);

  return 0;
}

/*
  Output:
  12.300000 45 0.600000  
*/

