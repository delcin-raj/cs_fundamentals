#include <stdio.h>

int main() {
    printf("Celsius\t\t\tFahrenheit\n");
    printf("------------------------------------\n");

    float celsius, fahrenheit;
    int upper = 300, step = 10;

    celsius = upper;
    while (celsius >= 0) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.1f°C\t\t%6.1f°F\n", celsius, fahrenheit);
        celsius -= step;
    }

    return 0;
}






