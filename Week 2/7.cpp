#include<stdio.h>
int main()
{
	int a,b,c,d,e,p;
	printf("Enter 5 marks\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	printf("%d%%\n",p);
	if(p>=90)
	printf("Grade A");
	else if(80<=p<90)
	printf("Grade B");
	else if(70<=p<80)
	printf("Grade C");
	else if(60<=p<70)
	printf("Grade D");
	else if(40<=p<60)
	printf("Grade E");
	else
	printf("Grade F");
	return 0;
	
}
