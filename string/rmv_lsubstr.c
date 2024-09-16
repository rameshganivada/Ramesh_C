#include<stdio.h>
#include<string.h>

int main()
{
	char s1[40],s2[20];
	printf("enter the string\n");
	fgets(s1,40,stdin);
	printf("enter the sub string\n");
	fgets(s2,40,stdin);
	int n1,n2;
	n1=strlen(s1);
	n2=strlen(s2);
	char *p;
	char *found=NULL;
	for(p=s1;p=strstr(p,s2);p=p+n2)
	{
		found=p;
	}
	memmove(found,found+n2,strlen(found+n2)+1);
	printf("%s",s1);
}



