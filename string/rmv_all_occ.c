//remove all occurence in given string

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30],s2[30];
	printf("enter the s1\n");
	//fgets(s1,30,stdin);
	gets(s1);
	printf("enter the substring\n");
	//fgets(s2,30,stdin);
	gets(s2);
	char *p;
	char *found=NULL;
	int l1,l2;
	l1=strlen(s1);
	l2=strlen(s2);
	for(p=s1;p=strstr(p,s2);p=p+l2)
	{
		memmove(p,p+l2,strlen(p+l2)+1);
	}
		printf("%s",s1);
}
