#include <stdio.h>
int main()
{

    int num1 = 0, num2 =0, num3 = 0, octal = 0, decimal = 0, sum =0;
    printf(": ");
    scanf("%d", &octal);
    num1 = octal/100;
    num2 = (octal - (num1*100))/10;
    num3 = octal%10;

    decimal = num1*8*8 + num2*8 + num3*1;

    int dec1 = 0, dec2 = 0, dec3 = 0;
    dec1 = decimal/100;
    dec2 = (decimal-(dec1*100))/10;
    dec3 = decimal%10;
    sum = dec1 + dec2+ dec3;


    printf("dec.: %d\n", decimal);
    printf("ZS: %d ", sum);

   return 0;
}

