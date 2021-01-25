#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, counterValid=0, counterInvalid=0;
    char operation='c', resultbearbeiten;


    scanf("%d\n", &num1);
    do
    {
        scanf("\n%c\n", &operation);
        scanf("\n%d", &num2);
        switch(operation)
        {
        case '+':
            if(num1==num2+1||num2==num1+1)
            {
                printf("Einer der Operanden ist um 1 kleiner oder groesser als der andere.\nErgebnis:%d", num1);
                ++counterInvalid;
            }
            else
            {
                printf("Ergebnis: %d\n", num1+num2);
                num1=num1+num2;
                ++counterValid;
            }
            break;
        case '-':
            if(num1==num2+1||num2==num1+1){
                printf("Einer der Operanden ist um 1 kleiner oder groesser als der andere\nErgebnis: %d\n", num1);
                ++counterInvalid;
            }else{
            printf("Ergebnis: %d\n", num1-num2);
            num1=num1-num2;
            ++counterValid;
            }
            break;
        case '*':
            if(num1==num2+1||num2==num1+1){
                printf("Einer der Operanden ist um 1 kleiner oder groesser als der andere.\nErgebnis:%d\n", num1);
                ++counterInvalid;
            }else{
            printf("Ergebnis: %d\n", num1*num2);
            num1=num1*num2;
            ++counterValid;
            }
            break;

        case '/':

            if(num2==0)
            {
                printf("Operation ist ungueltig!\nKeine Divisionen durch 0!\nErgebnis: %d\n", num1);
                ++counterInvalid;
            }
            else if(num1%num2 != 0)
            {
                printf("Operation ist ungueltig!\nErgebnis ist %d mit %d Rest. Soll gerundet (r), abgeschnitten (c) oder verworfen (x) werden?\n", num1/num2, num1%num2);
                scanf(" %c", &resultbearbeiten);
                switch(resultbearbeiten)
                {
                case 'r':
                    if((num1%num2)>(num2/2))
                    {
                        printf("Ergebnis: %d\n",(num1/num2)+1);
                        //num1=(num1/num2)+1;
                        ++counterValid;
                        break;

                    }
                    else
                    {
                        printf("Ergebnis: %d\n",num1/num2);
                        num1=num1/num2;
                        ++counterValid;
                        break;

                    }
                case 'c':
                    printf("Ergebnis: %d\n", num1/num2);
                   ++counterValid;
                    continue;

            case 'x':
                printf("Ergebnis: %d\n", num1);
                ++counterInvalid;
                continue;
            }
            }
            else if(num1%num2==0)
            {
                printf("Ergebnis: %d\n", num1/num2);
                num1=num1/num2;
                ++counterValid;
            }


            break;
        }
    }
    while(operation != 'x');
    printf("Programm wird beendet. Es wurden %d gueltige Operationen und %d ungueltige Operationen durchgefuehrt.", counterValid, counterInvalid);



}
