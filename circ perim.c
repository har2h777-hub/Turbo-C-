#include <stdio.h>

int main() {
  
  
    float radius;
    float circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;

    printf("Circumference = %.2f", circumference);

    return 0;
}