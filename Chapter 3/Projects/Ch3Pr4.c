/*
  Write a program that prompts the user to enter a telephone in the form
  (xxx) xxx-xxxx and the displays the number in the form xxx.xxx.xxxx:
  Enter the phone number [(xxx) xxx-xxxx]: (404) 817-6900
  You enetered 404.817.6900
*/

#include <stdio.h>

int main(void) {

  int area_code, prefix, number;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &area_code, &prefix, &number);

  printf("You entered %d.%d.%d", area_code, prefix, number);

  return 0;
}

/*
  Output:
  Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
  You entered 404.817.6900
*/
