#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<5;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
