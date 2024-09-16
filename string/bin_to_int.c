//binary to int
#include<stdio.h>
#include<string.h>

int main()
{
	int binary,res=0,base=1,rem,num;
	printf("enter the binary num\n");
	scanf("%d",&binary);
	num=binary;
	while(num>0)
	{
		rem=num%10;
		res=res+rem*base;
		base=base*2;
		num=num/10;
	}
	//printf("%d\n",binary);
printf("%d\n",res);
}


	
