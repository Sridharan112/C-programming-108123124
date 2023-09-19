#include<stdio.h>
int main()
{
	int a;
	printf("Enter a year");
	scanf("%d",&a);
	if(a%4==0&&(a%100!=0||a%400==0))
	printf("The given year is leap year");
	else
	printf("The given year is not leap year");
	return 0;
}
