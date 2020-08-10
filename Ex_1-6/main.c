#include <stdio.h>

int main() {
    int character;
    int expression;

    while(1) {
        character = getchar();

        if(character != EOF) {
            printf("Value is 1\n");
        }
        else {
            printf("Value is 0\n");
            break;
        }
    }
}