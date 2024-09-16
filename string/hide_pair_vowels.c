//Hide pair of vowels 

#include<stdio.h>
#include<string.h>


int isvowel(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			return 1;
	}
	return 0;
}


int main()
{
	char str[40],*ptr;
	printf("enter the string\n");
	gets(str);
	int flag=0,n;
	n=strlen(str);
	for(ptr=str;*ptr;ptr++)
	{
		if((isvowel(*ptr))&&(isvowel(*(ptr+1))))
		{
			flag=1;
			memset(ptr,'*',2);
		}
	}
	if(flag==1)
	{
		printf("%s",str);
	}
	else
	{
		printf("no pair of vowels\n");
	}
}

