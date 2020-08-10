#include <stdio.h>

int main() {
    int character;

    while((character = getchar()) != EOF)
    ;
    printf("Value of EOF: %d\n", character);
}