#include<stdio.h>
int main()
{
	int n,i,t,j,p=0,q=n-1,s;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the sum");
	scanf("%d",&s);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
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
	for(i=0;i<n;i++)
	{
		if(a[p]+a[q]==s)
		{
			printf("%d %d",a[p],a[q]);
			break;
		}
		else if(a[p]+a[q]<s)
		p++;
		else
		q--;
	}

	return 0;
}
