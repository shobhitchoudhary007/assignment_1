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
    printf("\nAfter swap\n");
    printf("a=%d",a);
    printf("b=%d",b);    
    return 0;  
}