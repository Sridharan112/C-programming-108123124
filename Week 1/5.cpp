#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	c=a;
	d=b;
	a=d;
	b=c;
	printf("%d %d",a,b);
	return 0;
	
}
