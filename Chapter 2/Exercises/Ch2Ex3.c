/*
Section 2.3
  Condense the dweight.c program by:
  (1) replacing the assignments to heigtht, length and weight with initializers.
  (2) removing the weight variable, instead calculating (volume + 165) / 166
      within the last printf.
*/

/* 
  dweight.c
  Computes the dimensional weight of a 12" x 10" x 8" box
*/

#include <stdio.h>

int main (void) 
{
  /* Old declaration - int height, length, width, volume, weight; */
  
  int height = 8, length = 12, width = 10, volume; /* New declaration*/
 
  volume = height * length * width;
  
  printf("Dimensions: %d x %d x %d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
  
  return 0;
}

/*
  (1) replacing the assignments to heigtht, length and weight with initializers.
      int height = 8, length = 12, width = 10;
  
  (2) removing the weight variable, instead calculating (volume + 165) / 166
      within the last printf.
      printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
*/
  
