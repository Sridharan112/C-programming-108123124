#include<stdio.h>
int main()
{
	int n,i,a[n],k,j,s=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the key\n");
	scanf("%d",&k);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		s=s+1;
	}
	printf("%d",s);
	return 0;
	
}
