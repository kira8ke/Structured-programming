#include <stdio.h>
#include "functions.h"

void populateTrends(struct FashionTrend trends[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Enter a fashion trend %d: ", i+1);
        scanf("%s", trends[i].name);

        printf("Enter the score for trend %d: ", i+1);
        scanf("%d", &trends[i].score);
    }
}

void printTrends(struct FashionTrend trends[10]) {
    printf("\nFashion Trends:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s (%d)\n", trends[i].name, trends[i].score);
    }
}
