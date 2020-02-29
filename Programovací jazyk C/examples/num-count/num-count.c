#include <stdio.h>

int main()
{
  int nums[10];
  int z, i;

  for (i = 0; i < 10; i++)
    nums[i] = 0;

  while ((z = getchar()) != EOF)
    if (z >= '0' && z <= '9')
      nums[z - '0']++;

  for (i = 0; i < 10; i++)
    printf("%d\t%d\n", i, nums[i]);
}