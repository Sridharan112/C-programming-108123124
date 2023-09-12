#include<stdio.h>
int main()
{
	float a,c,d,f;
	int b;
	scanf("%d %d",&a,&b);
	if (b==1)
	d=27/100*a;
	else if (b==2)
	d=24/100*a;
	else if (b==3)
	d=16/100*a;
	else
	d=12/100*a;
	c=0.48*a+0.08*a;
	f=a+d+c;
	printf("%d",f);
	return 0;
}
