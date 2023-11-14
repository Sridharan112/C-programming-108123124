#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20],b[]={0,0,0,0,0,0,0,0,0,0,0,0,0};
	printf("Enter a string\n");
	scanf("%s",&a);
	fflush(stdin);
	int n=strlen(a);
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]==a[j+1])
			b[i]+=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
		printf("The frequency of %s is %s",a[i],b[i]);
	}
	return 0;
}
