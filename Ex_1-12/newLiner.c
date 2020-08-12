#include <stdio.h>

#define IN 1
#define OUT 0


int main() {
    int character;
    int state = OUT;

    while((character = getchar()) != EOF) {
        if(character == ' ' || character == '\n' || character == '\t') {
            state = OUT;
        }
        else {
            if(state == OUT) {
                state = IN;
                putchar('\n');
                putchar(character);
            }
            else if(state == IN) {
                putchar(character);
            }
        }
    }
}