#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	char a[n];
	printf("Enter the character\n");
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		printf("%c ",a[i]);
	
	}
	return 0;
}
