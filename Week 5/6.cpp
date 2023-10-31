#include<stdio.h>
int main()
{
	int n,i,t,j,k,l,h;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of k\n");
	scanf("%d",&k);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
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
	l=a[k-1];
	h=a[n-k];
	printf("%dth smallest term is %d\n",k,l);
	printf("%dth largest term is %d",k,h);
	return 0;
}
