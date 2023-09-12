#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if (a<=100)
	printf("%d",a*100);
	else if (a>100&&a<=500)
	printf("%d",a*500);
	else
	printf("%d",a*100);
	return 0;
	
}
