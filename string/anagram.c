#include<stdio.h>
#include<string.h>

int main()
{
       char s1[30],s2[30];
       printf("enter the word\n");
       gets(s1);
       printf("enter the word2\n");
       gets(s2);
       int n=strlen(s1);
       int i,j,count=0;
       for(int i=0;i<n;i++)
       {
	       for(j=0;j<n;j++)
	       {
		       if(s1[i]==s2[j])
			       count++;
	       }
       }
	       if(count==n)
	       {
		       printf("anagram\n");
	       }
	       else
	       {
		       printf("not anagram");
	       }
	       
}       
