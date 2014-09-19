#include <stdio.h>
#include <stdlib.h>

int main() {
    int tmp;
    int last1 = 1;
    int last2 = 1;
    int sum;
    while (last1 < 4000000) {
        tmp = last1;
        last1 += last2;
        last2 = tmp;
        if (last1 % 2 == 0) {
            sum += last1; 
            printf("%d\n", sum);
        } 
    }
    return 0;
}
