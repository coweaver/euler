#include <stdlib.h>
#include <stdio.h>

int main()
{
  int currtri = 285;
  int currpen = 165;
  int currhex = 143;

  currtri++;
  currpen++;
  currhex++;

  while (currtri != currpen || 
	 currpen != currhex || 
	 currtri != currhex)
    {
           if ( hex(currhex) < tri(currtri) || 
		hex(currhex) < pen(currpen) )
	{
	  currhex++;
	}
      else if ( pen(currpen) < tri(currtri) || 
		pen(currpen) < hex(currhex) )
	{
	  currpen++;
	}
      else if ( tri(currtri) < pen(currpen) || 
		tri(currtri) < hex(currhex) )
	{
	  currtri++;
	}
      else
	{
	  printf("e");
	  break;
	}
    }
  printf("\n%d, %d, %d\n", tri(currtri), pen(currpen), hex(currhex));
  return 0;
}

int tri(int num)
{
  return (num * (num + 1)) / 2;
}

int pen(int num)
{
  return (num * (3 * num - 1)) / 2;
}

int hex(int num)
{
  return num * (2 * num - 1);
}
