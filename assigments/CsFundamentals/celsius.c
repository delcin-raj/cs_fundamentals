#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = 0;      
    upper = 100;    
    step = 10;      
    printf("Celsius\tFahrenheit\n"); // Heading

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.2f\t%10.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

    return 0;
}
