//write a program to remove occurence in the given string
//and print sorted string
//eg:  embedded test
//Output: tsmdeb

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[40];
	printf("enter the string\n");
	gets(str);
	int l;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				memmove(str[i],str[j],l-j);
			}
		}
	}
	printf("%s",str);
}

