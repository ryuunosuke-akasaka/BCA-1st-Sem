#include<stdio.h>
#include<conio.h>
void printseries()
{
	int i,n,num1=0,num2=1,num3=0;
	printf("\n enter the limit: \n");
	scanf("%d",&n);
	printf("\n the fibonacci series is:%d\t %d\t ",num1,num2);
	for(i=2;i<n;i++)
	{
		num3=num1+num2;
		printf("%d\t",num3);
		num1=num2;
		num2=num3;
	}
}
void main()
{
	printseries();
	getch();
	return;
}
