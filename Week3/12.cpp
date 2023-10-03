#include<stdio.h>
int main()
{
	int n,a,rem=0,s=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		rem=a%10;
		s=s+rem;
		a=a/10;
	}
	printf("%d",s);
	return 0;
}
