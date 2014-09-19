#include <stdio.h>
#include <stdlib.h>

// Main Function
int main()
{
  unsigned int sum = 0;
  unsigned int fibA = 1;
  unsigned int fibB = 2;
  unsigned int temp = 0;

  while ( fibB < 4000000 )
  {
    if ( fibB % 2 == 0)
      sum += fibB;

    temp = fibA + fibB;
    fibA = fibB;
    fibB = temp;
  }

  printf("Solution: %u\n", sum);

  return 0;
}
