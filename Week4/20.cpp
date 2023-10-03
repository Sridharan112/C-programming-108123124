#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("Enter the number and number of rows \n");
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++,a++)
	{
		for(j=0;j<i+1;j++)
		printf("%d ",a);
		printf("\n");
	}
	a=a-1;
	for(i=0;i<n;i++,a--)
	{
		for(j=0;j<n-i;j++)
		printf("%d ",a);
		printf("\n");
	}
	
	return 0;
}
