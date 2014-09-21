#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int q1()
{
	int sum = 0;
	int x = 1;
	while (x < 1000){
		if (x % 3 == 0 && x % 5 != 0) {
			sum += x;
		}
		if (x % 5 == 0 && x % 3 != 0) {
			sum += x;
		}
		if (x % 3 == 0 && x % 5 == 0) {
			sum += x;
		}
		x++;
	}
	return sum;
}

int isPrime(n)
{
	int x = 2;
	int prime = 1;
	while (x <= sqrt(n)){
		prime = prime && n % x != 0;
		x++;
	}
	return prime;	
}

int q7()
{
	int x = 0;
	int current = 1;
	while (x != 10001){
		current++;
		if (isPrime(current)){
			x++;
		}
	}
	return current;
}

int main()
{
	printf("Euler Problem 1: %d\n", q1());
	printf("Euler Problem 7: %d\n", q7());
	
}