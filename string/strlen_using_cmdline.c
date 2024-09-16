#include<stdio.h>
#include<string.h>

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("wrong input format\n");
		return 0;
	}
	int i;
	for(i=0;argv[2][i];i++)
		printf("length of string %s = %d\n",argv[1],i);
}	
