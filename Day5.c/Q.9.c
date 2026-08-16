/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    // Input principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Simple Interest = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest = P * (1 + R/100)^T - P
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}