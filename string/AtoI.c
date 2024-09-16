//ATOI userdefine
#include<stdio.h>
#include<string.h>

int myAtoI(char* str)
{
	int res=0,sign=1,i=0;
	if(str[i]=='-')
	{
		sign=-1;
		i++;
	}
	for(i;str[i]!='\0';i++)
	{
		res=res*10+str[i]-'0';
	}
	return res*sign;
}

int main()
{
	char str[40];
	int num;
	printf("enter the string\n");
	gets(str);
	num=myAtoI(str);
	printf("%d",num);
}
