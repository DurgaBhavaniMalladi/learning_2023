#include <stdio.h>

struct Box {
    double l;
    double w;
    double h;
};

void calculateBoxProperties(struct Box *box) {
    double volume = box->l * box->w * box->h;
    double surfaceArea = 2 * (box->l * box->w + box->l * box->h + box->w * box->h);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &boxPtr->l);
    
    printf("Enter the width of the box: ");
    scanf("%lf", &boxPtr->w);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &boxPtr->h);

    calculateBoxProperties(boxPtr);

    return 0;
}