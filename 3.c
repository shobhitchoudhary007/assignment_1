//WAP to find the reverse of a 4 digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, rev= 0, rem;
    printf("Enter an integer = ");
    scanf("%d", &n);
    while (n != 0) 
        {
         rem=n % 10;
         rev=rev*10+rem;
         n /= 10;
        }
    printf("Reversed number = %d", rev);
    return 0;
}

//Output
//Enter an integer = 123
//Reversed number = 321
