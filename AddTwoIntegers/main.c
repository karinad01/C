#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num1, num2, sum;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  sum = num1 + num2;

  printf("The sum of %d and %d is %d", num1, num2, sum);

    return 0;
}
