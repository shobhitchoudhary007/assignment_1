//WAP to swap two variables with and without using third variable
#include<stdio.h> 
#include<conio.h> 
int main()    
{    
    int a, b;      
    printf("Enter the first variable=");
    scanf("%d",&a);
    printf("Enter the second variable=");
    scanf("%d",&b);
    a=a+b;    
    b=a-b;    
    a=a-b;    
    printf("After swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);    
    return 0;  
}

//Output
//Enter the first variable=5
//Enter the second variable=6
//After swap
//a=6
//b=5
