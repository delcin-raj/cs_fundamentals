#include <stdio.h>
#include <string.h>

int main () {
   char str[5];

   printf("Enter a string : ");
   scanf("%s", str);

   printf("You entered: %s", str);

   printf("Length of chars entered %ld", strlen(str)); // '\0' is the null character and it is put at the end of every string
   char null;
   null = 0;
   null = '\0';

   return(0);
}