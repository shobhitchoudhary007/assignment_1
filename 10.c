// WAP to find out whether the entered number is Armstrong or not
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int n,nu,num=0,rem;
 printf("Enter the digit=");
 scanf("%d",&n);
 nu=n;
 while(nu!=0)
      {
        rem=nu%10;
        num=num+(rem*rem*rem);
        nu=nu/10;
      }
 if(num==n)
    {
      printf("The digit is Armstrong");
    }
 else
    {
      printf("The digit is not Armstrong");
    }
 return 0;
}


/*Enter the digit=153
The digit is Armstrong*/