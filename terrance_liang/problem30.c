#include <stdio.h>
#include <stdlib.h>

int main(){
  int startnum=2;
  int total=0;
  for (startnum; startnum<=354294; startnum++){//354294 is sum of 9^5 * 6
    int a,b,c,d,e,f,g;
    a=startnum/100000;
    b=(startnum%100000)/10000;
    c=(startnum%10000)/1000;
    d=(startnum%1000)/100;
    e=(startnum%100)/10;
    f=startnum%10;
    int sum=pow(a,5)+pow(b,5)+pow(c,5)+pow(d,5)+pow(e,5)+pow(f,5);
    if (sum==startnum){
      total+=sum;
    }
  }
  printf("%d",total); //Answer is 443839
  return total; 
}
