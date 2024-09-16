#include<stdio.h>
#include<string.h>

char* myItoA(int n)
{
	int i=0,digit;
	char str[40];
	/*if(num<0)
	  {
	  flag=1;
	  }*/
	while(n)
	{
		digit=n%10;
		str[i]=digit+'0';
		n=n/10;
		i++;
	}
	str[i]='\0';
	return str;
	//printf("%s",str);

}	

int main()
{
	int num;
//	char *p;
	printf("enter the num\n");
	scanf("%d",&num);
	char *p=myItoA(num);
	while(*p!='0')
	{
	printf("%c",*p);
	p++;
	}
			//	for(p;p!='\0';p++)
}
