#include<stdio.h>
int main()
{
	int n,i,j;
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
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d is the first element that repeats\n",a[i]);
			    break;
			}
		
		}
	}
	return 0;
}
