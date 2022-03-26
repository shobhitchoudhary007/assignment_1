//WAP to find the reverse of a 4 digit number and compare it to the original number.
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int n,orig,rev=0,rem;
 printf("Enter the digit=");
 scanf("%d",&n);
 orig=n;
 while(n>0)
      {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
      }
 printf("The reverse digit is=%d",rev);
 if(orig==rev)
    {
      printf("\nThe Original digit=%d is equal to its Reverse digit=%d",orig,rev);
    }
 else
    {
      printf("\nThe Original digit=%d is not equal to its Reverse digit=%d",orig,rev);
    }
 return 0;
}


//Output
//Enter the digit=321
//The reverse digit is=123
//The Original digit=321 is not equal to its Reverse digit=123