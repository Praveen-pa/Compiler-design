#include<stdio.h>
#include<ctype.h>
void main()
{
	char a[10];
	int flag,i=1;
	printf("\n Enter an identifier :");
	gets(a);
	if(isalpha(a[10]))
	flag=1;
	else
	printf("\n Not a valid indentifier");
	while(a[i]!='\0')
	{
		if(!isdigit(a[i])&&!isalpha(a[i]))
		{
			flag=0;
			break;
		}i++;
	}
	if(flag==1)
	printf("\n valied identifier");
}
