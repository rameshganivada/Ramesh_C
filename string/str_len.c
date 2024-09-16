#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);
}

