#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	printf("enter the string\n");
	scanf("%s",str);
	int i,j,len,temp;
	len=strlen(str);
	for(i=0,j=len-1;i<(len/2);i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
}


