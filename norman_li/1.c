#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int i;
  unsigned int sum = 0;

  for (i = 1; i < 1000; i++)
  {
    if ( (i % 3 == 0) || (i % 5 == 0) )
      sum += i;
  }

  printf("Solution: %u\n", sum);
  
  return 0;
}
