#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=0,n;
	printf("Enter the string\n");
	scanf("%[^\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e')
		{
			count++;
		}
	}
	printf("%d",count);
}
