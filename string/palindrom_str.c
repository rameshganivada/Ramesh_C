#include<stdio.h>
#include<string.h>

int main()
{
	char str[40];
	int i,j,count=0,flag=0,n;
	printf("enter the string\n");
	//	fgets(str,40,stdin);
	ghttps://infyspringboard.onwingspan.com/web/en/page/embed-gno?survey=2138ets(str);
	n=strlen(str);
	for(i=0,j=n-1;i<(n/2);i++,j--)
	{
		if(str[i]==str[j])
		{
			count++;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("not a palindrom\n");
	}
	else
	{
		printf("palindrom\n");
	}
}

