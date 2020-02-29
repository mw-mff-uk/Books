#include <stdio.h>

int removeChar(char from[], char c);

int main()
{
  char text[] = "Hello World!";
  int len = removeChar(text, 'l');

  printf("%s\n%d\n", text, len);
}

int removeChar(char from[], char c)
{
  int j = 0;
  for (int i = 0; from[i] != '\0'; i++)
    if (from[i] != c)
      from[j++] = from[i];

  from[j] = '\0';

  return j;
}