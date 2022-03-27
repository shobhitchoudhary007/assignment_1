//WAP to enter numbers until the user wants. At the end it should display the count of positive, negative and zeros entered.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num, count_p=0, count_n=0, count_z=0;
    int arr[100];
    printf("Enter size of array= ");
    scanf("%d", &num);

    printf("Enter the number :\n");
    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i=0;i<num;i++)
    {
        if(arr[i]>0)
          {
            count_p++;
          }
        else if(arr[i]<0)
               {
                 count_n++;
               }
             else if(arr[i]==0)
                    {
                     count_z++;
                    }
        
    }
    printf("Positive Numbers: %d\n", count_p);
    printf("Negative Numbers: %d\n", count_n);
    printf("Zero Numbers: %d\n", count_z);
}


/*Enter size of array= 5
Enter the number :
12
-3
0
0
-3
Positive Numbers: 1
Negative Numbers: 2
Zero Numbers: 2     */