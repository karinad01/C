#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c;


  printf("Enter a character: ");
  scanf("%c", &c);

  if((c >= 'a' && c <= 'z')  || (c >= 'A' && c <= 'Z'))
  printf("You have entered an alphabet");
  else
  printf("You did not entered an alphabet");

      return 0;
}
