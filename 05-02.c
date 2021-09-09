
#include <stdio.h>

char radius[100];

int area;

int main()
{
    printf("Enter Radius: ");
    fgets(radius, 100, stdin);
    
    area = 1.33333 * 3.14159  * pow(atoi(radius), 3);
    
    printf("Area: %d\n", area);

    return 0;
}
