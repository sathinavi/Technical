#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d", a, b);

    a = a + b;  // a = 15
    b = a - b;  // b = 5
    a = a - b;  // a = 10

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
