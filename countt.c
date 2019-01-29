#include <stdio.h>
#include <conio.h>
int main() 
{
	int num,digit=0,i;
	scanf("%d",&num);
	while(num!=0)
	{
	num=num/10;
	digit++;
	}
	printf("%d",digit);
	return 0;
}
