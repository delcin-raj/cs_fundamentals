#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

# define UPPER 400

int main() {
    float fahr, celsius;
    float starting_faranheit_value, step;
    starting_faranheit_value = 0;
    step = 30;
    /* starting_faranheit_value limit of temperatuire scale */
    /* UPPER limit */
    /* step size */
    fahr = starting_faranheit_value;
    printf("Faranheit   Celsius\n");
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %30.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}