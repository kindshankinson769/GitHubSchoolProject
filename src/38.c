#include <stdio.h>

int main() {
    int i = 5;
    while (i > 0) {
        if (i % 2 == 0) break; // Exit loop when divisible by 2
        else i--; // Increment i until it's not divisible by 2
    }
    printf("The number is even.\n");
    return 0;
}
