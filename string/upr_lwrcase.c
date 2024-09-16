#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int n,i;
	printf("enter the string\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
		{
			str[i]=str[i]+32;
		}
		else if((str[i]>='a')&&(str[i]<='z'))
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}
