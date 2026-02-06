#include <stdio.h>
// #define CONSUMPTION_TAX_RATE 8  // Consumption tax rate in percentage
#define CONSUMPTION_TAX(x) x * 8 / 100

int main(void) {
    int price1 = 100;
    int price2 = 230;

    printf("%i\n", CONSUMPTION_TAX(price1));
    printf("%i\n", CONSUMPTION_TAX(price2));
}
