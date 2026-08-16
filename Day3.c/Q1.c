/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion to Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    // Output
    printf("\nTemperature in Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}