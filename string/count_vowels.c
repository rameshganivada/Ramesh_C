#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	printf("Enter the string\n");
	scanf("%s",str);
	int len,i,count=0;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
	}
	printf("vowels in %s is %d",str,count);
}



