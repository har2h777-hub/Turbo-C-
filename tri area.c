#include <stdio.h>

int main() {
   
    float base;
    float height;
    float area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = 0.5 * height * base;

    printf("Area of triangle = %.2f", area);

    return 0;
}