#include <stdio.h>

int main() {

    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    int b = x % y;
    printf("The remainder is: %d", b);

    return 0;
}