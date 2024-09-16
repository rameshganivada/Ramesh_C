#include<stdio.h>
#include<string.h>

int check(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U')
	{
		return 1;
	}
	else {
		return 0;
	}
}


int main()
{
	char ch;
	printf("enter the char\n");
	scanf("%c",&ch);
	int ret=check(ch);
	if(ret==1)
	{
		printf("%c is vowel\n",ch);
	}
	else
	{
		printf("%c is consonant\n",ch);
	}
}
