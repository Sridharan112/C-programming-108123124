#include<stdio.h>
int main()
{
	int n,i,a[n],s=0,b,x,j;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	b=((n+1)*(n+2))/2;
	x=b-s;
	printf("%d",x)
;}
