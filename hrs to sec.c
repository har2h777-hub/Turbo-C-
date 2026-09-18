#include <stdio.h>

int main() {
    
    int hours;

    printf("Enter hours: ");
    scanf("%d", &hours);

    int seconds = hours * 3600;
    printf("Seconds = %d", seconds);

    return 0;
}