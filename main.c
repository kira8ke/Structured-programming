#include <stdio.h>
#include "functions.h"

int main() {
    struct FashionTrend trends[10];

    populateTrends(trends);
    printTrends(trends);

    return 0;
}
