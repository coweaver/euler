#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    unsigned long sum;
    for (i = 1;i < 1000;i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("%lu\n", sum);
    return 0;
}
