#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d^3 = %d\n", i, i*i*i);
    }
    return 0;
}
