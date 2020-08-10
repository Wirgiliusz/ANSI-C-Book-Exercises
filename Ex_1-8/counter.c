#include <stdio.h>

int main() {
    long spaceCount = 0;
    long tabulatorCount = 0;
    long lineCount = 0;
    int character;

    while((character = getchar()) != EOF) {
        if(character == ' ') {
            ++spaceCount;
        }
        else if(character == '\t') {
            ++tabulatorCount;
        }
        else if(character == '\n') {
            ++lineCount;
        }
    }
    printf("Number of spaces: %ld\nNumber of tabulators: %ld\nNumber of new lines: %ld\n", spaceCount, tabulatorCount, lineCount);
}