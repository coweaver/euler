#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;
  long j;
  int tempans;
  int ans = 0;
  int longest = 0;
  int nums[1000000];
  char b = 1;
  for (;i<1000000;i++) {
    b = 1;
    tempans = 0;
    j = i;
    while (b) {
      if (j == 1) {
	tempans++;
	b = 0;
      }
      else if (j<i) {
	tempans+=nums[j];
	b = 0;
      }

      else if (j%2 == 0) {
	tempans++;
	j = j/2;
      }
      else {
	tempans++;
	j = (3*j) + 1;
      }
    }
    nums[i] = tempans;
    if (tempans > ans) {
      ans = tempans;
      longest = i;
    }
  }
  printf("%i\n",longest);
  return ans;
}
