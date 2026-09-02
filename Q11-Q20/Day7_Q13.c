/* Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include<stdio.h>

int main(){
    int year;
    printf("Enter The Year :");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  {
        printf("%d is Leap year\n",year);
    } else {
        printf("%d Not a leap year\n",year);
    }

    return 0;
}