#include <stdio.h>

int power(int num, int exp);

int main()
{
  int i;

  for (i = 1; i <= 20; i++)
    printf("%2d\t%3d\n", i, power(i, 2));
}

int power(int num, int exp)
{
  int res = 1;

  for (; exp > 0; exp--)
    res *= num;

  return res;
}