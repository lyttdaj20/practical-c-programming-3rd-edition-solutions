
// 5.1

#include <stdio.h>

char celsius[10];
int fahrenheit;

int main()
{
    printf("Enter Temperature in Celsius: ");
    fgets(celsius, 10, stdin);
    
    fahrenheit = (1.8 * atoi(celsius)) + 32;
    
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);

    return 0;
}
