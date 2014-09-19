#include <stdio.h>
#include <stdlib.h>

unsigned int sumSquareDigits(unsigned int a) {
    int sum = 0;
    while (a > 0) {
        sum += (a % 10) * (a % 10);
        a /= 10;
    }
    return sum;
}

unsigned int createChain(unsigned int a) {
    while (a != 89 && a != 1) {
        a = sumSquareDigits(a);
    }
    return a;
}

int main() {
    int counter = 0;
    unsigned int x = 10000000;
    for (int i=1; i<x; i++) {
        if (createChain(i) == 89) {
            counter++;
        }
    }
    printf("Numbers that end in 89: %d\n", counter);
}
