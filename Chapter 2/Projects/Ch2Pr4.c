/*
  Write a program that asks the user to enter a dollars-and-cents amount,
  then displays the amount with 5% tax added.
*/

#include <stdio.h>

#define TAX (5.0f / 100.0f)

int main (void)
{
  float amount, tax_added;

  printf("Enter an amount: $");
  scanf("%f",&amount);

  tax_added = amount + (amount * TAX);

  printf("With tax added: $%.2f", tax_added);

  return 0;
}

/*
  Output:(if input = 200)
  Enter an amount: $200
  With tax added: $210.00
*/
