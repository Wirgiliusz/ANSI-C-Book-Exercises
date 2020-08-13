#include <stdio.h>

#define CHARACTER_COUNT 95 //From 32 (SPACE) to 127 (DEL)

int main() {
    int character;
    int nchar[CHARACTER_COUNT] = {0};

    while((character = getchar()) != EOF) {
        nchar[character] += 1;
    }

    printf("%5s %5s", "Char", "Count\n");
    for(int i=0; i<CHARACTER_COUNT; i++) {
        printf("%5c %5d ", i+32, nchar[i]);
        for(int j=0; j<nchar[i]; j++) {
            printf("|");
        }
        printf("\n");
    }
}