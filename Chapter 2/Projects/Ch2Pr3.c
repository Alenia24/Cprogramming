/*
  Modify the program in Programming Project so that it prompts the user
  to enter the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.14159f

int main (void) 
{
  float radius, volume;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);
  
  volume = (4.0f/3.0f) * PI * (radius * radius * radius);
  
  printf("The volume of the sphere with a %.2f meter radius is: %.2f.\n ", radius, volume);
  
  return 0;
}

/*
  Output: (if radius = 12)
  The volume of the sphere with a 12 meter radius is: 7238.22.
*/
