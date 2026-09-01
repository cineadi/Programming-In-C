/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first No. :");
    scanf("%d",&a);
    printf("Enter the Second  No. :");
    scanf("%d",&b);
    printf("The Sum of First and Second No. is : %d \n",a+b);
    printf("The Differenc of First and Second No. is : %d \n",a-b);
    printf("The Product of First and Second No. is : %d \n",a*b);
    printf("The Quotient of First and Second No. is : %d \n",a/b);


    
    return 0;
}