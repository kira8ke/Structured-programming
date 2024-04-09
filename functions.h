#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct FashionTrend {
    char name[50];
    int score;
};

void populateTrends(struct FashionTrend[]);
void printTrends(struct FashionTrend[]);

#endif