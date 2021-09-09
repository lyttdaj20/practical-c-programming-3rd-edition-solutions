
#include <stdio.h>

char height[100];
char width[100];

int perimeter;

int main()
{
    printf("Enter Height: ");
    fgets(height, 100, stdin);
    
    printf("Enter Width: ");
    fgets(width, 100, stdin);

    perimeter = 2 * (atoi(width) + atoi(height));
    
    printf("Perimeter: %d", perimeter);

    return 0;
}
