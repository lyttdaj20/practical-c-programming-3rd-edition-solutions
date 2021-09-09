
// 5.4

#include <stdio.h>

char kph[100];
int mph;

int main()
{
    printf("Enter Speed in kph: ");
    fgets(kph, 100, stdin);
    
    mph = atoi(kph) * 0.6213712;
    
    printf("Speed in mph: %d", mph);

    return 0;
}
