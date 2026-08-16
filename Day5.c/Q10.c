/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/#include <stdio.h>

int main() {
    long int totalseconds, hours, minutes, seconds;
    printf("Enter the total number of seconds: ");
    scanf("%ld", &totalseconds);

    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;

    printf("Time in hours, minutes, and seconds is: %ld:%ld:%ld\n", hours, minutes, seconds);

    return 0;
}