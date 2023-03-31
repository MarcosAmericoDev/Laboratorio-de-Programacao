#include <stdio.h>

int main() {

    int celsius;
    float fahrenheit;

    for (celsius = 10; celsius <= 100; celsius+=10)
    {   
        fahrenheit = 1.8 * celsius + 32;
        printf("%d°C = %.1f°F \n", celsius, fahrenheit);
    }
    
    return 0;
}