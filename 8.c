#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int a,b,c;
 printf("Enter the age of A=");
 scanf("%d",&a);
 printf("Enter the age of B=");
 scanf("%d",&b);
 printf("Enter the age of C=");
 scanf("%d",&c);
 if(a<b)
   {
    if(a<=c)
      {
       printf("A is youngest");
      }
    else{
         printf("C is youngest");
        }
   }
 else{if(b<=c)
        {
         printf("B is youngest");
        }
      else{
           printf("C is youngest");
          }
      }
 return 0;  
}