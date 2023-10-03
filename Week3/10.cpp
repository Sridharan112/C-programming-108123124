#include<stdio.h>
#include<math.h>
int main()
{
	int a,j,r,t,n,i=0;
	printf("Enter a number\n");
	scanf("%d",&a);
	for(j=0;a>0;j++)
	{
		a=a/10;
	}
	r=n%10*pow(10,i);
	for(i=0;i<=j;i++)
	{
	n=n/10;
	t=n%10;
	t=t*pow(10,i);
	r=r+t;
	}
	printf("%d",r);
	return 0;
	
	
	
}
