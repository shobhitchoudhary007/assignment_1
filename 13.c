//Two numbers are entered through the keyboard. WAP to find the value of one number raised to the power of another
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c=1, x;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    x = b;
    while(b!=0)
         {
          c = c * a;
          b = b - 1;
         }
    printf("%d raised to the power %d: %d",a,x,c);
    return 0;
}


//Output
//Enter the value of a: 2
//Enter the value of b: 3
//2 raised to the power 3: 8