
// 4.3

#include <stdio.h>

int width;
int height;

int perimeter;
int area;


int main()
{
    
    width = 3;
    height = 5;
    
    perimeter = 2 * (height + width);
    
    area = width * height;
    
    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d", area);

    return 0;
    
    /*
        To handle width and height values that are not integers,
        we would use floats instead of ints
    */
}
