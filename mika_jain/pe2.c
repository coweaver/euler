//simple and straightforward
#include <stdio.h>
#include <stdlib.h>
int main(){
int sum = 0;
int f1 = 0;
int f2 = 1;
int t = 0;
while (f2 < 4000000){
t = f1;
f1 = f2;
f2 = f1 + t;
if (f2%2 == 0) sum += f2;
}
printf("ans: %d\n", sum);
return 0;
}
//ans: 4613732
