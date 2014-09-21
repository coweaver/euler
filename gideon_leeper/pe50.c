#include <stdio.h>

int n = 1000000, prime[1000000], primes[50000];

void generate(){
	int i, j, count = 1;
	for(i=0; i<n; i++)
		prime[i] = 0;
	for(i=0; i<50000; i++)
		primes[i] = 0;
	prime[2] = 1;
	primes[0] = 2;
	for(i=3; i<n; i++){
		for(j=2; j*j <= i; j++)
			if(prime[j] && i%j == 0)
				break;
		if(j*j > i){
			prime[i] = 1;
			if(count < 50000)
				primes[count++] = i;
		}
	}
}

int main(){
	int first, length, maxlength=0, sum, maxsum=0;
	generate();
	for(first=0; primes[first]; first++){
		sum = 0;
		for(length = 0; primes[first + length] && sum+primes[first+length] < n; ){
			sum += primes[first + length];
			length++;
			if(prime[sum] && length > maxlength){
				maxsum = sum;
				maxlength = length;
			}
		}
		if(length < maxlength)
			break;
	}
	printf("%d\n", maxsum);
}
