#include<stdio.h>
int main()
{
	int a,n,rev=0,rem=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(n==rev)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	printf("%d",rev);
	return 0;
}
