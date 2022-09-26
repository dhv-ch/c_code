//c code to print multiplication table

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i=1;
	printf("Enter the no. for which you want to print the multiplocation table: ");
	scanf("%d", &n);

	while(i<=10)
	{
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}

	return 0;
}
