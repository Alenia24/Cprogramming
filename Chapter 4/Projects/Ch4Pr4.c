/*
  Write a program that reads an integer entered by the user and displays it in octal (base 8)
  Enter a number between 0 and 32767: 1953
  In octal, your number is: 03641
  
  The output should be displayed using five digits, even if fewer digits are sufficient.
  Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal
  number ( 1 in this case). Then divide the original number by 8 and repeat the process to arrive at
  the next-to-last digit. (printf is capable of displaying numbers in base 8, as we'll see in Chapter 7,
  so there's actually an easier way to write the program.)
*/

#include <stdio.h>

int main(void)
{
    int input, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    digit5 = input % 8;
    input /= 8;
    
    digit4 = input % 8;
    input /= 8;
    
    digit3 = input % 8;
    input /= 8;
    
    digit2 = input % 8;
    input /= 8;
    
    digit1 = input % 8; 

    printf("In octal, your number is: %1d%1d%1d%1d%1d\n\n", digit1, digit2, digit3, digit4, digit5);   

    return 0;
}

/*
  Output: 
  Enter a number between 0 and 32767: 1953
  In octal, your number is: 03641
*/
