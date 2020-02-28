#include <stdio.h>

#define OUTER 0
#define INNER 1

int main()
{
  int z, lines, words, bytes, state;

  state = OUTER;
  lines = words = bytes = 0;

  while ((z = getchar()) != EOF)
  {
    bytes++;
    if (z == '\n')
    {
      lines++;
    }
    if (z == ' ' || z == '\n' || z == '\t')
    {
      state = OUTER;
    }
    else if (state == OUTER)
    {
      words++;
      state = INNER;
    }
  }

  printf("Bytes: %d\n", bytes);
  printf("Words: %d\n", words);
  printf("Lines: %d\n", lines);
}