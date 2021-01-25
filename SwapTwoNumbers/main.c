#include <stdio.h>
#include <stdlib.h>

int main()
{

double first, second, temp;

printf("Enter first number: ");
scanf("%lf", &first);

printf("Enter second number: ");
scanf("%lf", &second);

temp = first; //temp става равно на първото
first = second; //второто става равно на първото
second = temp; // първото става второто

printf("\nAfter swapping, first Number = %.2lf\n", first);
printf("After swapping second number = %.2lf",second);
    return 0;
}
