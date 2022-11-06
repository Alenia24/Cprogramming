/*
  Section 4.2
  Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were replaced
  by (10 - (total % 10)) % 10?
*/
  
#include <stdio.h>

int main(void) {

  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum,
      second_sum, total;

  printf("Enter the first (single) digit: ");
  scanf("%d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", (10 - (total % 10)) % 10);  

  return 0;
}

/*
  Output:
  Enter the first (single) digit: 0
  Enter first group of five digits: 13800
  Enter second group of five digits: 15173
  Check digit: 5
  
  Answer: 
  The program will still work.
*/
