/*
  Section 2.8
  In the dweight.c program(Section 2.4), which spaces are essential.
*/

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;
  
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;
  
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);
  
  return 0;
}

/*
  Answer:
  At line 8: between int and main
  At line 10: between int and height
  At line 22: between return and 0;
*/
