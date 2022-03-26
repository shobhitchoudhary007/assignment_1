//WAP to find the area & perimeter of a rectangle
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter the length=");
    scanf("%f",&length);
    printf("Enter the breadth=");
    scanf("%f",&breadth);
    
    //Area and Perimeter
    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("The area is=%f",area);
    printf("\nThe perimeter is=%f",perimeter);
    return 0;
}

//Output:
//Enter the length=2
//Enter the breadth=3
//The area is=6.000000
//The perimeter is=10.000000