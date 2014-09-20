#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;
	int now = 2;
	int high = 1;
	int low = 1;
	
	for (; now < 4000000; now += low){
		if (now % 2 == 0){
			sum += now;
		}
		low = high;
		high = now;
	}
	
	printf("%d\n", sum);	
	
	return 0;
	
}
