#include<stdio.h>
int main()
{
	int i;
	char a[5]="asdf";
	char b='d';
	for(i=0;i<5;i++)
	{
		if(a[i]==b)
		printf("%d",i);
	}
	return 0;
}
