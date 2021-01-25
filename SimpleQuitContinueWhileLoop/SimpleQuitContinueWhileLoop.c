#include <stdio.h>

int main() {

    int answer;

     do{
         printf("1. Continue\n2. Quit\n");
         scanf("%d", &answer);
         if(answer == 1)
            printf("Your selection:\nLet's continue\n");
         else if (answer==2)
            printf("Your selection:\nBye, bye\n");
         else
            printf("Your selection:\nUnknown selection\n");
     }
     while(answer != 2);

    return 0;
}
