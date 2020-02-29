#include <stdio.h>

float f2c(float fahr);
float c2f(float cel);
void f2cTable(int low, int high, int step);

int main()
{
  f2cTable(0, 300, 20);
}

float f2c(float fahr)
{
  return (5.0 / 9.0) * (fahr - 32);
}

float c2f(float cel)
{
  return (9.0 / 5.0) * cel + 32;
}

void f2cTable(int low, int high, int step)
{
  float fahr = low;

  printf("Fahr   Cel\n");
  for (; fahr <= high; fahr += step)
    printf("%4.0f   %3.1f\n", fahr, f2c(fahr));
}
