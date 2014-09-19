#include <stdio.h>
#include <stdlib.h>

long reducepow(long a, long b) {
    long x = 1;
    long i;
    for (i=a; i>0; i--) {
        x = x % 10000000000; // Keeps the power at 10 digits or less (does not affect results of the last 10 digits)
        x = x * b;
    }
    return x;
}

int main() {
    long x = 0;
    long i;
    for (i=1; i<=1000; i++) {
        x = x + reducepow(i, i);
        x = x % 10000000000;
        printf("%ld ^ %ld = %ld\n", i, i, x);
    }
}

