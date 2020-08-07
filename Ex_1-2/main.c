#include <stdio.h>

main() {
    printf("using illegal symbol: \"\\p\" \p \n");
}

// ANSWER: 
// The backslah symbol ("\") is ommited and the used character is printed ("p"). 
// Compilator shows warning "main.c:4:12: warning: unknown escape sequence: '\p'"