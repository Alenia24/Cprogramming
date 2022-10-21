/*
  Write a program that asks the user to enter a U.S. dollar amount 
  and then shows how to pay that amount using the smallest number 
  of $20, $10,$5 and $1 bills:
  Enter a dollar amount: 93
  $20 bills: 4
  $10 bills: 1
  $5 bills: 0
  $1 bills: 3
  
  Hint: Divide the amount by determine the number of $20 bills needed,
  and then reduce the amount by the total value of the $20 bills.
  Repeat for the other bill sizes. Be sure to use integer values throughout,
  not floating-point numbers.
*/

#include <stdio.h>

int main(void)
{
  int amount, twenty_bills, ten_bills, five_bills, one_bills, remainder;

  printf("Enter the dollar amount: $");
  scanf("%d", &amount);

  twenty_bills = amount / 20;
  amount %=  20;
  ten_bills = amount / 10;
  amount %= 10;
  five_bills = amount / 5;
  amount %= 5;
  one_bills = amount / 1;

  printf("$20 bills: %d\n", twenty_bills);
  printf("$10 bills: %d\n", ten_bills);
  printf("$5 bills:  %d\n", five_bills);
  printf("$1 bills:  %d\n", one_bills);

  return 0;
}

/*
  Output:(when amount = 93)
  Enter the dollar amount: $93
  $20 bills: 4
  $10 bills: 1
  $5 bills:  0
  $1 bills:  3
*/
