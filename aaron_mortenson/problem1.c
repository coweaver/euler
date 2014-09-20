#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  int ans = 0;
  for (;i<1000;i++) {
    if (i%3 == 0 || i%5 == 0)
      ans += i;
  }
  printf("%i\n",ans);
  return ans;
}
