#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); //read string
    printf("Name: ");
    puts(name); //display string

    return 0;
}
