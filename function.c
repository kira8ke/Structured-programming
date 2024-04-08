#include<stdio.h>
void displayPopularity(struct FashionEntity entities[], int numEntities) {
    printf("Name\tPopularity Score\n");
    for (int i = 0; i < numEntities; i++) {
        printf("%s\t%d\n", entities[i].name, entities[i].popularity);
    }
}

int main() {
    
    struct FashionEntity entities[10] = {
        {"Dress", 80},
        {"Shirt", 90},
        {"Pants", 85},
        {"Skirt", 70},
        {"Jacket", 95},
        {"T-Shirt", 88},
        {"Jeans", 92},
        {"Sweater", 82},
        {"Hat", 75},
        {"Scarf", 87}
    };

    
    displayPopularity(entities, 10);

    return 0;
}