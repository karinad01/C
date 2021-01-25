#include <stdio.h>
#include <stdlib.h>

int main()
{
char c;
int vowel, consonant;

printf("Enter an alphabet: ");
scanf("%c", &c);

vowel = (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i' ||
         c == 'A' || c == 'E' || c == 'O' || c == 'U' || c == 'I');

         if(vowel)
            printf("%c is a vowel", c);
         else
            printf("%c is a consonant", c);
    return 0;
}
