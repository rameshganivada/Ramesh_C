#include<stdio.h>
#include<string.h>
char* Strrev(char* );
int main()
{
	char s1[30],s2[20];
	printf("enter the string\n");
	gets(s1);
	printf("enter the substr\n");
	gets(s2);
	char *p;
	for(p=s1;p=strstr(p,s2);p=p+strlen(s2))
	{
	s2=Strrev(s2);
		strcpy(p,s2);
		printf("%s",s1);
	}
	//printf("%s",s1);
}
char* Strrev(char *str)
{
	int n=strlen(str);
	char temp;
	for(int i=0,j=n;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=str[i];
	}
	return str;
}

