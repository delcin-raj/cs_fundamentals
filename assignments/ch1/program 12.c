#include <stdio.h>

int main(void)
{
  char c;
//This while loop will continue until getchar doesnt reach EOF
 while ((c = getchar()) != EOF)
  {
// Line 10 checks if the character is a space , tab or a newline.
    if (c == ' ' || c == '\t' || c == '\n')
    {
      putchar('\n');
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}