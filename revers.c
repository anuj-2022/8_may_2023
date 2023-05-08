#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,n;
	char a[40]="THUNDERSOFT HYDERABAD",c;
	n=strlen(a);

	for(i=0;i<n;i++)
	{
		c=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=c;
	}

	printf("%s",a);
	return 0;
}
