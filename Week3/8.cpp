#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter a number\n ");
	scanf("%d",&a);
	for(i=0;a>0;i++)
	{
		a=a/10;
	}
	printf("%d",i);
	return 0;
}
