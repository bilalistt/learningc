#include <stdio.h>
#include <stdlib.h>

int main() {
    int r; // radius
    int pi = 3; // π
    printf("Please enter the radius of circle:");
    scanf("%d", &r);
    printf("Area of circle: %d \n", r * r * pi );
    printf("Perimeter of circle: %d", 2 * pi * r);
    return 0;
}    