#include<stdio.h>
int main()
{
	int i,j,n,a=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++,a++)
		printf("%d ",a);
		printf("\n");
	}
	return 0;
}
