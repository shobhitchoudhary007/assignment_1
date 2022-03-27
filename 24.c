//WAP to find the maximum number and second maximum in an array.
#include<stdio.h>
#include<conio.h>
int main() 
{
    int a[10], n, larg1, larg2, i;

    printf("Enter number of elements you want in array :");
    scanf("%d", &n);
    printf("Enter elements :");
    for (i = 0; i < n; i++) 
        {
          scanf("%d", &a[i]);
        }
    larg1 = a[0];
    for (i = 0; i < n; i++) 
        {
          if (a[i] > larg1) 
             {
               larg1 = a[i];
             }
        }
    larg2 = a[0];
    for (i = 1; i < n; i++) 
        {
          if (a[i] > larg2 && a[i] < larg1)
             {
               larg2 = a[i];
             }
        }
    printf("First and second largest number is %d and %d ", larg1, larg2);
    return 0;
}


/*Output
Enter number of elements you want in array :5
Enter elements :1
2
3
4
5
First and second largest number is 5 and 4 
*/