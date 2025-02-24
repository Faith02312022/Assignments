#include<stdio.h>//printf (), scanf()
int main()
{
//variable declaration and initialization
int length;
int width;
int area;


    printf("give the length of the rectangle: \n");
    scanf("%d", &length);
    
    printf("give the width of the rectangle:\n");
    scanf("%d", &width);
    
    area = length * width;
    printf("The area of a rectangle is: %d", area );
    return 0;
}