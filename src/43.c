#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    printf("The value of x is: %d\n", x);
    free(x); // Explicitly freeing the memory allocated for x
    return 0;
}
