#include<stdio.h>
int main()
{
	int i,n,t,j;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		printf("%d ",a[i]);
	}
}
