//WAP to find the sum of the digits of a 4 digit number
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int n,sum=0,m;    
 printf("Enter a number:");    
 scanf("%d",&n);    
 while(n>0)    
      {    
       m=n%10;    
       sum=sum+m;    
       n=n/10;    
      }    
 printf("Sum is=%d",sum);    
 return 0;
}


//Output
//Enter a number:234
//Sum is=9