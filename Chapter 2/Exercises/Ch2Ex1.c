/*
  Section 2.1
  Create and run Kernighan and Ritchie's famous "hello, world" program:
  
  #include <stdio.h>
  
  int main(void) 
  {
    printf("hello, world\n");
  }
  
  Do you get a warning message from the compiler? If so, what's needed to make it go away?
 */

#include <stdio.h>

int main(void) 
{
  printf("hello, world\n");
  
  return 0; /* Added to remove warning message*/
}

/*
  Q: Do you get a warning message from the compiler?
  A: The compiler runs both with and without error depending on the method used to compile the program.
  
  Q: If so, what's needed to make it go away?
  A: Line 17 is added to remove the warning message. 
     return 0; - indicates that the program "returns" the value 0 to the operating system
     when it terminates.
*/





