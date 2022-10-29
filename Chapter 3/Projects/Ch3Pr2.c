/*
  Write a program that formats product information entered by the user. 
  A session with the program should look like this:
  Enter item number: 583
  Ehter thr unit price: 13.5
  Enter the purchase date(mm/dd/yyyy): 20/24/2012
  
  Item        Unit          Purchase
              Price         Date
  583         $   13.50     10/24/2010
*/

#include <stdio.h>

int main(void) {

  int item_num, month, day, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d  \t\t$  %.2f\t%.2d/%.2d/%d", item_num, unit_price, month, day, year);

  return 0;
}

/*
  Output:
  Enter item number: 583
  Enter unit price: 13.50
  Enter purchase date (mm/dd/yyyy): 10/24/2010

  Item            Unit            Purchase
                  Price           Date
  583             $  13.50        10/24/2010  
*/
