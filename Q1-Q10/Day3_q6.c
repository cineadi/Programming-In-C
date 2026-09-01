/*Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the first No. :");
    scanf("%d", &a);
    printf("Enter the second No. :");
    scanf("%d", &b);
    
    temp = a;
    a = b;
    b = temp;

    printf("After swap first no.: %d \n", a);
    printf("After swap second no.: %d \n", b);
    return 0;
}