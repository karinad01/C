#include <stdio.h>
#include <stdlib.h>

int main()
{

    //This is an example how does the do - while loop works
    int num1;
    int num2;
    int num3;
    int sum;

    printf("Enter three integers: " );
    scanf ("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("%d + %d + %d = %d", num1, num2, num3, sum);


    return 0;
}
