#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	printf("Enter the string\n");
	scanf("%s",&a);
	fflush(stdin);
	int x=strlen(a);
	int i,n;
	char b;
	printf("Enter position\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter character\n");
	scanf("%c",&b);
	fflush(stdin);
	for(i=x-3;i>n-1;i--)
	{
		a[i+1]=a[i];
	}
	a[n]=b;
	printf("%s",a);
	return 0;
}
