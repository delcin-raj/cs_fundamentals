#include <stdio.h>

int main() {
    printf("Temperature Conversion Table\n");
    printf("------------------------------\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("------------------------------\n");

    float celsius, fahrenheit;
    int lower =0, upper = 100, step = 10;

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.1f°C\t\t%6.1f°F\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}