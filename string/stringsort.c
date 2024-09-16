#include<stdio.h>
#include<string.h>

int main()
{
	char s[5][10],temp[10];
	int i,j,k;
	printf("enter the string\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			k=strcmp(s[j],s[j+1]);
			if(k==1)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("sorted string\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",s[i]);
	}

}

