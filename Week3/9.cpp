#include<stdio.h>
int main()
{
	int s,a,b,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	a=0,b=1;
	for(int i=2;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
	}
	printf("%d",s);
	return 0;
}
