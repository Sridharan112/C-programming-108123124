#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	a=i*a;
	}
	printf("%d",a);
	
	return 0;
	
}
