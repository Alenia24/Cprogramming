/*
  Section 4.2
  Show the output produced by each of the following program fragments.
  Assume that i, j and k are int variables.
  
  (a) i = 7; j = 8;
      i *= j + 1;
      printf("%d %d", i, j); // 57
  (b) i = j; k = 1;
      i += j += k;
      printf("%d %d %d", i, j, k); //17
  (c) i = 1; j = 2; k = 3;
      i -= j -= k;
      printf("%d %d %d\n", i, j, k); // -4
  (d) i = 2; j =1; k = 0;
      i *= j *= k;
      printf("%d %d %d\n", i, j, k); // 0
*/

#include <stdio.h>

int main(void) {

  int i, j, k;

  i = 7; j = 8;
  i *= j + 1;
  printf("%d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);

  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);

  i = 2; j =1; k = 0;
  i *= j *= k;
  printf("%d %d %d\n", i, j, k);

  return 0;
}

/*
  Output:
  (a) 63 8
  (b) 3 2 1
  (c) 2 -1 3
  (d) 0 0 0
*/
