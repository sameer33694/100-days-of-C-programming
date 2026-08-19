//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main(){
    double a, b, c;

    printf("Enter three numbers : ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    if (a > b){
        if (a > c){
            printf("%lf is the largest", a);
        }
        else if (a == c){
            printf("%lf and %lf are equal and the largest", a, c);
        }
        else{
            printf("%lf is the largest", c);
        }
    }

    else if (b > a){
        if (b > c){
            printf("%lf is the largest", b);
        }
        else if (b == c){
            printf("%lf and %lf are equal and the largest", b, c);
        }
        else{
            printf("%lf is the largest", c);
        }
    }

    else if (a == b){
        if (c > a){
            printf("%lf is the largest", c);
        }
        else if (c == a){
            printf("all three are equal");
        }
        else{
            printf("%lf and %lf are equal and the largest", a, b);
        }
    }

 }
 