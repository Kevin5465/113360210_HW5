#include <stdio.h>

void stringReverse(const char* str) {
    if (*str == '\0') {
        return; 
    }

    stringReverse(str + 1);
    putchar(*str); 
}

int main(void) {
    char input[100]; 

    printf("Enter a string: ");
    scanf("%99s", input); 

    printf("Reversed String: ");
    stringReverse(input); 
    printf("\n");

    return 0;
}

