#include <stdio.h>
#include <math.h>

int pent(int n){
	return (n+1)*(3*n + 2)/2;
}

int issquare(int n){
	return ((int) sqrt(n))*((int) sqrt(n)) == n;
}

int ispent(int n){
	return issquare(24*n + 1) && (((int) sqrt(24*n + 1)) + 1)%6 == 0;
}

int main(){
	int i, j, min=10000000;
	for(i=1; i<3000; i++)
		for(j=i-1; j>=0; j--)
			if(ispent(pent(i)-pent(j)) && ispent(pent(i)+pent(j)) && pent(i)-pent(j) < min){
				min = pent(i) - pent(j);
				break;
			}
	printf("%d\n", min);
}




