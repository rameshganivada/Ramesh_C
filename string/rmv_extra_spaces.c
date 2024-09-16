#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[40];
	char *p;
	int count=0,n;
	printf("enter the string\n");
//	scanf("%[^\n]s",str);
        // gets(str);
	fgets(str,40,stdin);
	n=strlen(str);
	if(str=="NULL")
	{
		printf("empty string\n");
		return 0;
	}
	else
	{

       // for(p=str;*p;p++)
       for(p=str;p<str+n;p++)
	{
		if((isspace(*p))&&(isspace(*(p+1))))
		{
			memmove(p,p+1,strlen(p+1)+1);
			count++;
			p--;
		}
	}

	}
	if(count)
	{
		printf("%s",str);
	}
	else
	{
		printf("no spaces\n");
		return 0;
	}
}


