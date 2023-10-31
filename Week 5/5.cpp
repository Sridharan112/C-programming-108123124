#include<stdio.h>
int main()

{
	int i,t,n,p=0,q=n-1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n+1)/2;i++)
	{
		t=a[p];
		a[p]=a[q];
		a[q]=t;
		p++;
		q--;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
