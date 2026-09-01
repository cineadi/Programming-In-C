/* Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main()
{
    int radius;
    float pi =3.14159;
    printf("Enter the radius of circle :");
    scanf("%d", &radius);
    float area=pi*radius*radius;
    printf("The area of circle is : %f \n",area );
    float Circumference=2*pi*radius;
    printf("The Circumference of  Circle is : %f \n",Circumference);
    return 0;
}