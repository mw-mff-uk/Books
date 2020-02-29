#include <stdio.h>

int str2int(char str[]);

int main()
{
  printf("%d\n", str2int("12"));
  printf("%d\n", str2int("+123"));
  printf("%d\n", str2int("-762"));
  printf("%d\n", str2int(""));
}

int str2int(char str[])
{
  int z;
  int num = 0;
  int sign = 0;
  int i = 0;

  if (str[i] == '+' || str[i] == '-')
    sign = str[i++] == '+' ? 1 : -1;

  while ((z = str[i++]) != '\0')
    num = num * 10 + z - '0';

  return num * sign;
}