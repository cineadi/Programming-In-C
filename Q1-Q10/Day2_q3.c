/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>

int main() {
    int length,breadth,area ;
    printf("Enter the length of rectangle :");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle :");
    scanf("%d", &breadth);
    area= length*breadth;
    printf("The Area of Rectangle is %d \n",area);
    int Perimeter=2*(length+breadth);
    printf("The Perimeter of Rectangle is : %d \n",Perimeter);

    return 0;
}