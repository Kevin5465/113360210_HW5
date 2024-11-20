#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main(void) {
    int outcomes[13] = { 0 };
    int die1, die2, sum;

    srand(time(NULL));

    for (int i = 0; i < ROLLS; i++) {
        die1 = 1 + rand() % 6; 
        die2 = 1 + rand() % 6; 
        sum = die1 + die2; 
        outcomes[sum]++; 
    }

    printf("點數\t出現次數\t機率\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, outcomes[i], (outcomes[i] / (double)ROLLS) * 100);
    }

    return 0;
}
