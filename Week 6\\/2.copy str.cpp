#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	char a[n],b[n];
	printf("Enter the string\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	printf("%c",b[i]);
	
	return 0;
}
