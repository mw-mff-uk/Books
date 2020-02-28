#include <stdio.h>

int main()
{
  int z;

  while ((z = getchar()) != EOF)
    putchar(z);
}