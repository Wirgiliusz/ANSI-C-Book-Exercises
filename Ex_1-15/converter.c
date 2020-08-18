#include <stdio.h>
#include <stdlib.h>

float conv_CtoF(float celsius) {
    return (celsius*(9.0/5.0) + 32.0);
}

float conv_FtoC(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}


int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    printf("%3s %3s\n", "C", "F");
    printf("--------\n");
    celsius = lower;
    while(celsius <= upper) {
        printf("%3.0f %3.0f\n", celsius, conv_CtoF(celsius));
        celsius += step;
    }

    printf("%3s %6s\n", "F", "C");
    printf("-----------\n");
    fahr = lower;
    while(fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, conv_FtoC(fahr));
        fahr = fahr + step;
    }


    return EXIT_SUCCESS;
}
