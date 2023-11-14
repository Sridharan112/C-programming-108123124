#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter the string\n");
	scanf("%[^\n]",a);
	fflush(stdin);
	int n=strlen(a);
	int vowel=0,con=0,space=0,num=0;
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		vowel++;
		else if(65<=a[i]<=123)
		con++;
		else if(a[i]==' ')
		space++;
		else
		num++;
	}
	printf("%d %d %d %d",vowel,con,space,num);
	return 0;
}
