#include<stdio.h>
int main()

{
	int i,t,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	return 0;
}
