#include <stdio.h>

int main() {
    int price = 1700;
    int discount = 10;

    int amount = price * discount / 100;
    printf("Discount amount = %d", amount);

    return 0;
}