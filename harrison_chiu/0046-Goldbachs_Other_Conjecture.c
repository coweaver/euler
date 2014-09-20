#include <stdlib.h>
#include <stdio.h>

int main()
{
  int start = 1;
  int end = 3;
  while (start += 2)
    {
      if (!isPrime(start) && conjecture(start))
	{
	  printf("%d\n", start);
	  return 0;
	}
    }
}

int conjecture(int num)
{
  return isPrime(num - sq_2(num));
}

int sq_2(int num)
{
  return 2 * num * num;
}

int isPrime(int num)
{
  int start;
  for (start = 2; start <= num / 2; start++)
    {
      if (num % start == 0)
	return 1;
    }
  return 0;
}
