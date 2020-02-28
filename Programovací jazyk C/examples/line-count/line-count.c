#include <stdio.h>

int main()
{
  int z, count;

  count = 0;

  while ((z = getchar()) != EOF)
    if (z == '\n')
      count++;

  printf("%d\n", count);
}