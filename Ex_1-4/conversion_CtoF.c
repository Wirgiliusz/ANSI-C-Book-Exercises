#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    printf("%3s %3s\n", "C", "F");
    printf("--------\n");
    celsius = lower;
    while(celsius <= upper) {
        fahr = celsius*(9.0/5.0) + 32.0;
        printf("%3.0f %3.0f\n", celsius, fahr);
        celsius += step;
    }
}
