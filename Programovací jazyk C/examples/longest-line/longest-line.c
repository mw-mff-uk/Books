#include <stdio.h>

int copy(char from[], char to[]);
int readLine(char to[]);

int main()
{
  int lCurrent, lLongest;
  char current[1000];
  char longest[1000];

  lCurrent = lLongest = 0;
  while ((lCurrent = readLine(current)) > 0)
    if (lCurrent > lLongest)
      copy(current, longest);

  printf("%s", longest);
}

int copy(char from[], char to[])
{
  int i;

  for (i = 0; (to[i] = from[i]) != '\0'; i++)
    ;

  return i;
}

int readLine(char to[])
{
  int i, z;

  for (i = 0; (z = getchar()) != EOF && z != '\n'; i++)
    to[i] = z;

  if (z == '\n')
  {
    to[i] = z;
    i++;
  }

  to[i] = '\0';

  return i;
}