#include <stdio.h>

int main() {

    float radius;
    float area;

    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of circle = %.2f", area);

    return 0;
}