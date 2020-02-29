#include <stdio.h>

int isSpace(char c);
void swap(char str[], int i, int j);
int trim(char str[]);

int main()
{
  char strOriginal[] = "    Hello World!    ";
  char str[] = "    Hello World!    ";
  trim(str);

  printf("|%s| --> |%s|\n", strOriginal, str);
}

int isSpace(char c)
{
  return c == ' ' || c == '\n' || c == '\t';
}

void swap(char str[], int i, int j)
{
  char temp = str[i];
  str[i] = str[j];
  str[j] = temp;
}

int trim(char str[])
{
  int i, j;
  i = j = 0;

  for (; isSpace(str[i]); i++)
    ;

  for (; str[i] != '\0'; i++, j++)
    swap(str, i, j);

  for (; isSpace(str[j]); j--)
    ;

  str[j] = '\0';

  return j;
}