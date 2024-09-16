#include<stdio.h>
#include<string.h>

int main()
{
	char str[40];
	printf("Enter the string\n");
	scanf("%s",str);
	int i,j,len;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='O'||str[i]=='E'||str[i]=='I'||str[i]=='U')
		{
			for(j=i;j<len;j++)
			{
				str[j]=str[j+1];
			}
		}
	}
	printf("%s",str);
}

