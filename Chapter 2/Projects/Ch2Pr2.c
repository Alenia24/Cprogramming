/*
  Write a program the computes the volume of a sphere with a 10-meter radius,
  using the formula v = 4/3πr³. Write the fraction 4/3 as 4.0f/3.0f. (Try writing
  it as 4/3). What happens?) Hint: C doesn't have an exponentiation operator, so 
  you'll need to multiply r by itself twice to compute r³.
*/

#include <stdio.h>

#define PI 3.14159f

int main (void) 
{
  float radius = 10.0f, volume;
  
  volume = (4.0f/3.0f) * PI * (radius * radius * radius);
  
  printf("The volume of the sphere with a %.f meter radius is: %.2f.\n ", radius, volume);
  
  return 0;
}

/*
  Output:
  The volume of the sphere with a 10 is: 4188.79.
*/
