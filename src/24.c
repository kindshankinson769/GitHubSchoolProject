#include <stdio.h>

void main() {
    int i;
    int j;

    for (i = 0; i <= 100; i++) {
        for (j = 0; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", i);
                break;
            }
        }
    }

    for (j = 100; j >= 0; j--) {
        for (i = 0; i < j; i++) {
            if (i % j != 0) {
                printf("%d ", i);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
