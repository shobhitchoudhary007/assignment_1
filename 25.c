//WAP to pick up the largest number from any 5X5 matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5][5], i, j, max = 0;
	printf("Enter the array ;");
    for(i=0;i<5;i++)
        {
          for(j = 0; j<5; j++)
              {
                scanf("%d",&arr[i][j]);
              }
        }
	for (i = 0; i<5; i++)
	    {
		 for (j = 0; j<5; j++)
		     {
			  if (arr[i][j]>max)
			     {
				  max = arr[i][j];
			     }
		     }
	    }
	printf("Largest Number : %d", max);
	return 0;
}


/*Output
Enter the array ;1
2
3
4
5
6
7
8
9
10
11
12
13 
14
15
16
17
18
19
20
21
22
23
24
25
Largest Number : 25
*/
