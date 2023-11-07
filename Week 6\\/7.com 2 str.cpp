#include<stdio.h>
int main()
{
	int i,x=0;
	char a[]="asdfg",b[]="asdfg";
	for(i=0;i<5;i++)
	{
		if(a[i]!=b[i])
		x=-1;
		else if(a[i]==b[i])
		x=1;
	}
	if(x==1)
	printf("Equal");
	else
	printf("Not Equal");
	return 0;
}
