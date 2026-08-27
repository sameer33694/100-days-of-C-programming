//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;
    printf("Enter expression (num1 num2 operator): ");
    scanf("%lf %lf %c", &num1, &num2, &op);    
    switch (op){
        case '+':
            result = num1 + num2;
            printf("%f\n",result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f\n",result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f\n",result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else
                result = num1 / num2;
                printf("%f\n",result);
                break;
        case '%':
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else
                printf("%f\n",result);
                break;
        default:
            printf("Error: Invalid operator\n");        
    }
    return 0;
}