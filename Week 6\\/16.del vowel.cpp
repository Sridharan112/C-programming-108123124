#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	printf("Enter the string\n");
	scanf("%s",&a);
	fflush(stdin);
	int i,j,n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			for(j=i;j<n;j++)
			a[j]=a[j+1];
		}

		
	}
	printf("%s\n",a);
	return 0;
}
