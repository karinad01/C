#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    double number, sum = 0.0;

    for(i = 1; i <= 10; ++i) {

        printf("Enter a n%d: ", i);
        scanf("%lf", &number);
    if(number < 0.0) {

        break; //man kann auch continue schreiben
    }
        sum += number;

    }
    printf("Sum = %.2lf",sum);




    return 0;
}
