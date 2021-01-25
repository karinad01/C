#include <stdio.h>
#include <stdlib.h>

int main()
{
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);

    return 0;

    //Output is: 5
}
