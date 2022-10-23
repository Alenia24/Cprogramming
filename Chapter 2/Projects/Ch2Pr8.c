/*
  Write a program that calculates the remaining balance on a loan after the first,
  second, and third monthly payments:
  Enter amount of loan: 20000.00
  Enter interest rate: 6.0
  Enter monthly payment: 386.66
  
  Balance remaining after first payment: $19713.34
  Balance remaining after second payment: $19425.25
  Balance remaining after third payment: $19135.71
  
  Display each balance with two digits after the decimal point.
  Hint: Each month, the balance is decreased by the amount of the payment, but increased
  by the balance times the monthly interest rate, convert the interest rate entered by the
  user to a percentage and divide it by 12.  
*/

#include <stdio.h>

int main (void) 
{
  float amount, interest_rate, monthly_payment, monthly_interest_rate, balance;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", & monthly_payment);

  balance = amount;
  monthly_interest_rate = (interest_rate /100.0f) / 12;

  balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
  printf("Balance remaining after the first payment: %.2f\n", balance);
  balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
  printf("Balance remaining after the second payment: %.2f\n", balance);
  balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
  printf("Balance remaining after the third payment: %.2f\n", balance);


  return 0;
}

/*
  Output:
  Enter amount of loan: 20000
  Enter interest rate: 6.0
  Enter monthly payment: 386.66
  Balance remaining after the first payment: 19713.34
  Balance remaining after the second payment: 19425.25
  Balance remaining after the third payment: 19135.71
*/
