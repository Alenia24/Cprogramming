/*
  Section 4.3
  Only one of the expressions ++i and i++ is exactly the same
  as (i += 1); Which is it? Justify your answer.
*/
#include <stdio.h>

int main(void)
{
	int i = 1, j = 1, k = 1;

  ++i;
	printf("%d\n", i);

  j++;
	printf("%d\n", j);

  k += 1;
	printf("%d\n", k);

	return 0;
}

/*
  Output: 
  2
  2
  2
  
  Answer:
  Although the output would be the same the evaluation would 
  be different.
  It is not the same because in "++i" the increment happens
  before the statement is evaluated. While "i++" is incremented
  during the statement evaluation. "i += 1" is also evaluated 
  during the evaluation.  
*/
