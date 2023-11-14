#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100],t;
	printf("Enter the string\n");
	scanf("%s",&a);
	fflush(stdin);
	int i,j,n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%s",a);
	return 0;
}
