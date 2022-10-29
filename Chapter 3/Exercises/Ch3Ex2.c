/*
  Section 3.1
  Write calls of printf that displays a float variable x in the following formats.
  (a) Exponential notation; left-justified in a field of size 8; one digit after the decial point.
  (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
  (c) Fixed decimal notation; left-justified in a field size of 8; three digits after the decimal point.
  (d) Fixed decimal notation; right-justified in a field size of 6; no digits after the decimal point.  
*/

#include <stdio.h>

int main(void) {

  int x;

  //(a) Exponential notation; left-justified in a field of size 8; one digit after the decial point.
  printf("%-8.1e\n", x);

  //(b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
  printf("%10.6e\n", x);

  //(c) Fixed decimal notation; left-justified in a field size of 8; three digits after the decimal point.
  printf("%-8.3f\n", x);

  //(d)   (d) Fixed decimal notation; right-justified in a field size of 6; no digits after the decimal point.  
  printf("%6.0f\n", x);

  return 0;
}

