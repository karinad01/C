#include <stdio.h>
#include <stdlib.h>

int addNumbers(int a, int b); //If the user - defined function is written here, we don't need to write this function prototype, which gives us information about the name, type and the arguments of the function.

int main()
{
    int n1, n2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2);
    printf("sum = %d", sum);

    return 0;
}

int addNumbers(int a, int b) {

int result;
result = a + b;
return result;
}
