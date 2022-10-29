/*
  Section 3.2
  For each of the following pairs of scanf format strings. Indicate whether or not 
  the two strings are equivalent. If they are not, show how they can be distinguished.
  (a) "%d"        versus       " %d"
  (b) "%d-%d-%d"  versus       "%d -%d -%d"
  (c) "%f"        versus       "%f  "
  (d) "%f, %f"    versus       "%f, %f"
*/

#include <stdio.h>

int main(void) {
  int i = 5, m = 7, n = 9;
  float x = 30.00, y = 50.00;
  
  //(a) "%d" versus " %d"
  printf("%d\n", i);
  printf(" %d\n", i);

  //(b) "%d-%d-%d" versus "%d -%d -%d"
  printf("%d-%d-%d\n", i, m, n);
  printf("%d -%d -%d\n",i, m, n);

  //(c) "%f" versus "%f "
  printf("%f\n", x);
  printf("%f \n", x);

  //(d) "%f,%f" versus "%f, %f"
  printf("%f,%f\n", x, y);
  printf("%f, %f\n", x, y);
  
  return 0;
}

/*
  Answer:
  (a) "%d" versus " %d" is Not Equivalent this is because of the white spaces.
  Output: 
  5
   5
     
  (b) "%d-%d-%d" versus "%d -%d -%d" is Not Equivalent that is because of the white spaces.
   Output:
   5-7-9
   5 -7 -9
  
   (c) "%f" versus "%f " is Equivlent
    Output:
    30.000000
    30.000000
    
   (d)"%f,%f" versus "%f, %f" is Not Equivalent that is because of the white spaces.
    Output:
    30.000000,50.000000
    30.000000, 50.000000
*/
