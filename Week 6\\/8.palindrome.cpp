#include<stdio.h>
int main()
{
	int i;
	char b[5],a[5]="asdf";
	for(i=0;i<5;i++)
	b[4-i]=a[i];
	for(i=0;i<5;i++)
	printf("%c",b[i]);
	if(a==b)
	printf("\nPalindrome");	
	return 0;
}
