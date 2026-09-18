#include <stdio.h>

int main() {
  
    float side;
    float perimeter;

    printf("Enter side: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("Perimeter of square = %.2f", perimeter);

    return 0;
}