//WAP to find whether the year is leap or not
#include<stdio.h>  
#include<conio.h>  
int main() 
{  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(year%4==0)  
      {  
        printf("%d is a leap year",year);  
      } 
    else {  
          printf("%d is not a leap year",year);  
         }  
    return 0;  
}


//Output
//Enter a year: 2020
//2020 is a leap year