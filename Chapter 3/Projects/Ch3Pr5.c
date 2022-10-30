/*
  Write a program that asks the user to enter the numbers from 1 to 16
  (in any order) and then displays the numbers in a 4 by 4 arrangement,
  followed by the sums of the rows, columns and diagonals:
  Enter the numbers from 1 to 16 in any order:
  16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
  
  16 3 2 13
  5 10 11 8
  9 6 7 12 
  4 15 14 1
  
  Row sums: 34 34 34 34
  Columns sums: 34 34 34 34 
  Diagonal sums: 34 34
  
  If the row column and diagonal sums are all the same (as they are in this
  example, the numbers are said to form a magic square. The magic square shown
  here appears in a 1514 engraving by artist and mathematician Albert Durer.(Note
  that the middle numbers in the last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void) {

  int aa, ab, ac, ad, ba, bb, bc, bd, ca, cb, cc,
      cd, da, db, dc, dd, row1_sum, row2_sum, row3_sum,
      row4_sum, column1_sum, column2_sum, column3_sum, column4_sum,
      diagonal1_sum, diagonal2_sum;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &aa, &ab, &ac, &ad, &ba, &bb, &bc, &bd, &ca, &cb, 
        &cc, &cd, &da, &db, &dc, &dd);

  printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", 
        aa, ab, ac, ad, ba, bb, bc, bd, ca, cb, cc, cd, da, 
        db, dc, dd);
  
  printf("Row sums: %d %d %d %d\n", aa + ab + ac + ad,
                                    ba + bb + bc + bd, 
                                    ca + cb + cc + cd,
                                    da + db + dc + dd);
  printf("Columns sums: %d %d %d %d\n", aa + ba + ca + da,
                                        ab + bb + cb + db,
                                        ac + bc + cc + dc,
                                        ad + bd + cd + dd);
  printf("Diagonal sums: %d %d", aa + bb + cc + dd,
                                 ad + bc + cb + da);

  return 0;
}

/*
  Output:
  Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
  16 3 2 13
  5 10 11 8
  9 6 7 12
  4 15 14 1
  Row sums: 34 34 34 34
  Columns sums: 34 34 34 34
  Diagonal sums: 34 34
*/
