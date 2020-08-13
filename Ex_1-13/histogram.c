#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN_WORD 1
#define OUT_WORD 0


int main() {
    int character;
    int nchar = 0;
    int nword[MAX_WORD_LENGTH] = {0};
    int state = OUT_WORD;

    while((character = getchar()) != EOF) {
        if(character == ' ' || character == '\n' || character == '\t') {
            state = OUT_WORD;
        } else {
            state = IN_WORD;
        }

        if(state == IN_WORD) {
            nchar++;
        } else if(state == OUT_WORD) {
            if(nchar <= MAX_WORD_LENGTH) {
                nword[nchar] += 1;
            }
            nchar = 0;
        }
    }

    printf("%5s %5s", "Len", "Count\n");
    for(int i=0; i<MAX_WORD_LENGTH; i++) {
        printf("%5d %5d\n", i, nword[i]);
    }
}