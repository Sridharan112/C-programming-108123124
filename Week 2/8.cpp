#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 sides\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c&&b==a)
	printf("Equilateral");
	else if(a!=b&&b!=c&&c!=a)
	printf("Scalene");
	else
	printf("Isosceles");
	return 0;
}
