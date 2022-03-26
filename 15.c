//WAP to print all the Armstrong numbers between 1 and 500.
#include<stdio.h>
#include<conio.h>
int main()
{
        int n,sum,i,t,a;
    printf("The Armstrong numbers in between 1 to 500 are : \n");

    for(i = 1; i <= 500; i++)
       {
        t = i;
        sum = 0;
        while(t != 0)
             {
               a = t%10;
               sum += a*a*a;
               t = t/10;
             }

        if(sum == i)
        printf("\n%d", i);
       }
    return 0;
}


//Output
//The Armstrong numbers in between 1 to 500 are :
//1
//153
//370
//371
//407