//WAP to find the range of a set of numbers. Orange is the difference between the smallest and the biggest number in the list.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,num,max,min, range;
	
	printf("Enter how many number you want to enter : ");
	scanf("%d", &n);
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	max=min=num;
	
	for( i = 1; i < n; i++)
	{
		printf("Enter the number : ");
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	range = max - min;
	
	printf("\n\n%d is the range of the data.", range);
	return 0;
}




//Output
//Enter how many number you want to enter : 4
//Enter the number : 2
//Enter the number : 3
//Enter the number : 4
//Enter the number : 5


//3 is the range of the data.