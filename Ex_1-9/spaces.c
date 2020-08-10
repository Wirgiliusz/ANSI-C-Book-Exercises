#include <stdio.h>

int main() {
    int character;
    int wasSpace = 0;

    while((character = getchar()) != EOF) {
        if(character == ' ') {
            wasSpace = 1;
        }
        else {
            if(wasSpace) {
                putchar(' ');
                putchar(character);
                wasSpace = 0;
            }
            else {
                putchar(character);
            }
        }
    }
}