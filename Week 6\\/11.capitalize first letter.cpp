#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="in The day and night and in og cat bird";
	int i,n;
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		if(a[i]<='z'&&a[i]>='a')
		{
			if(i=0)
			a[i]-=32;
			else if(a[i]==' ')
		    a[i+1]-=32;
		}
		
	}
	printf("%s",a);
	return 0;
}
