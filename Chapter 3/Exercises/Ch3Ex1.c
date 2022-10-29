/*
  Section 3.1
  Question:
  What output do the following calls of printf produce?
  (a) printf("%6d, %4d", 86, 1040);
  (b) printf("%12.5e", 30.253);
  (c) printf("%.4f", 83.162);
  (d) printf("%-6.2g", .0000009979);
*/

#include <stdio.h>

int main(void) {
  
  /* Astericks are blank spaces. they are not printed */

  printf("%6d, %4d", 86, 1040);
  /*Output: ****86, 1040 */
  
  printf("%12.5e", 30.253);
  /*Output: *3.02530e+01 */
  
  printf("%.4f", 83.162);
  /*Output: 83.1620 */
  
  printf("%-6.2g", .0000009979);
  /*Output: 1e-06 */

  return 0;
}
