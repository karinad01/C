#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dividend, divisor, quotient, remainder;

  printf("Please enter a dividend: ");
  scanf("%d", &dividend);

  printf("Please enter a divisor: ");
  scanf("%d", &divisor);

  quotient = dividend/divisor;

  printf("\nThe quotient is %d", quotient);

  remainder = dividend%divisor;

  printf("\nThe remainder is %d", remainder);

    return 0;
}
