// WAP to print the multiplication table of the number entered by the user.
#include <stdio.h>
int main() 
{
  int n, i,m;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++) 
     {
       m=n*i;
       printf("%d * %d = %d \n", n, i,m);
     }
  return 0;
}

//Output
//Enter an integer: 9
//9 * 1 = 9
//9 * 2 = 18
//9 * 3 = 27
//9 * 4 = 36
//9 * 5 = 45
//9 * 6 = 54
//9 * 7 = 63
//9 * 8 = 72
//9 * 9 = 81
//9 * 10 = 90