#include<stdio.h>
int main()
{
	int i;
	char a[5]="asdf",b='q';
	int pos=1;
	for(i=5;i>=0;i--)
	if(pos<i)
	a[i+1]=a[i];
	a[i+1]=b;
	for(i=0;i<5;i++)
	printf("%c",a[i]);
	return 0;
}

