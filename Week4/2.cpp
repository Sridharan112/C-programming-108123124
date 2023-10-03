#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		printf("*");
		printf("\n");
	}
	return 0;
	
}
