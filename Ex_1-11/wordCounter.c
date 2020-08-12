#include <stdio.h>

#define IN 1
#define OUT 0


int main() {
    int character;
    int lineCount = 0;
    int wordCount = 0;
    int characterCount = 0;
    int state = OUT;

    while((character = getchar()) != EOF) {
        characterCount++;

        if(character == '\n') {
            lineCount++;
        }
        if(character == '\n' || character == ' ' || character == '\t') {
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            wordCount++;
        }
    }

    printf("Character count: %d\n", characterCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);
}