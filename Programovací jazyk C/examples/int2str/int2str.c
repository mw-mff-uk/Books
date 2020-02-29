#include <stdio.h>

void swap(char str[], int a, int b);
int count(char str[]);
int strrev(char str[], int len);
int int2str(int num, char str[]);

int main()
{
  char str[20];

  int2str(-12345, str);

  printf("%s\n", str);
}

void swap(char str[], int i, int j)
{
  char temp = str[i];
  str[i] = str[j];
  str[j] = temp;
}

int count(char str[])
{
  int i = 0;

  while (str[i] != '\0')
    i++;

  return i;
}

int strrev(char str[], int len)
{
  for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    swap(str, i, j);

  return len;
}

int int2str(int num, char str[])
{
  int sign;
  int i = 0;

  if ((sign = num) < 0)
    num *= -1;

  do
  {
    str[i++] = (num % 10) + '0';
    num /= 10;
  } while (num > 0);

  if (sign < 0)
    str[i++] = '-';

  str[i] = '\0';
  strrev(str, i);

  return i;
}