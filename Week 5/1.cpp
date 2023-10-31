#include<stdio.h>
int main()
{
	int n,i,avg,s=0,min=a[0],max=a[0];
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]<min)
		min=a[i];
		if(max<a[i+1])
		max=a[i];
		s=s+a[i];
	}
	avg=s/n;
	printf("%d %d %d",min,max,avg);
	return 0;
}
