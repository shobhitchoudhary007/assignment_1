//WAP to find whether the entered number is prime or not.
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int n,i,c=0;
 printf("Enter the digit= ");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
    {
     if(n%i==0)
       {
         c++;
       }
    }
 if(c==2)
    {
     printf("The %d is Prime",n);
    }
 else
    {
     printf("The %d is Not Prime",n);
    }
 return 0;
}


//Output
//Enter the digit= 12
//The 12 is Not Prime