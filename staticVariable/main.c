#include <stdio.h>
#include <stdlib.h>
void display();


int main()
{
display();
display();
display();
}

void display() {

    static int c = 1;
    c+= 5;
    printf("%d ", c);


}
