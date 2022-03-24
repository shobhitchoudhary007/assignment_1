#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int i;
 for(i=1;i<=100;i++)
    {
     if(i%15==0)
        {
         printf("\nObdure Infotech");
        }
     else if(i%5==0)
            {
             printf("\nInfotech");
            }
           else if(i%3==0)
                  {
                   printf("\nObdure");
                  }
                else
                    {
                     printf("\n%d",i);
                    }
    }
 return 0;
}