#include <stdio.h>

int proper(int size, int matrix[size][size])
{
  for (int r = 0; r < size; r++)
    for (int c = 0; c < size; c++)
      if (matrix[r][c] != matrix[c][r])
        return 0;

  return 1;
}

int mirror(int size, int matrix[size][size])
{
  int i, j, r;

  if (size % 2 == 0)
    i = size / 2 - 1, j = size / 2;
  else
    i = j = size / 2;

  for (r = 0; r < size; r++)
    for (; i >= 0 && j < size; i--, j++)
      if (matrix[r][i] != matrix[r][j])
        return 0;

  return 1;
}

int improper(int size, int matrix[size][size])
{
  int d;

  for (int r = 0; r < size; r++)
    for (int c = 0; c < size; c++)
    {
      d = size - r - 1 - c; // distance from diagonal

      if (matrix[r][c] != matrix[r + d][c + d])
        return 0;
    }

  return 1;
}

int main()
{
  int size = 3;

  int matrix[3][3] = {
      {1, 2, 4},
      {2, 3, 1},
      {6, 2, 1}};

  int prop = proper(size, matrix);
  int iprop = improper(size, matrix);
  int mir = mirror(size, matrix);

  printf("%d %d %d\n", prop, iprop, mir);
}
