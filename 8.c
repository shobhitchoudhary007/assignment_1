//If the ages of A, B and C are input through the keyboard, write a program to determine the youngest of the three.
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


//Output
//Enter the age of A=3
//Enter the age of B=4
//Enter the age of C=5
//A is youngest
