#include <stdio.h>

// Shivangi pandey
//BC2024285
// Addition of two numbers using pointer

int add(int *x, int *y) {
    return *x + *y;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Sum: %d\n", add(&a, &b));
    return 0;
}
