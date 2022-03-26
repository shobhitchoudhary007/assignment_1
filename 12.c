//WAP to find the factorial value of any number.
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int n,i,fact=1;
 printf("Enter the digit=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
 printf("Factorial of %d is %d",n,fact);
 return 0;
}



//Output
//Enter the digit=5
//Factorial of 5 is 120
