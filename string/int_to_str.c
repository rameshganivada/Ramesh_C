//int to string convertion`:
#include<stdio.h>
#include<string.h>
char strrev(char*);
int main()
{
	int num,i=0,digit;
	printf("enter the num\n");
	scanf("%d",&num);
	char str[40];
	while(num)
	{
		digit=num%10;
		str[i]=digit+48;
		num/=10;
		i++;
	}
	str[i]='\0';

	printf("%s\n",str);
	strrev(str);
}

char strrev(char* str1)
{
	int n,i,j,temp;
	n=strlen(str1);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
	}
	printf("%s",str1);
}

