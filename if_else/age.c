#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Ram's age : ");
	scanf("%d",&a);
	printf("Enter Shyam's age : ");
	scanf("%d",&b);
	printf("Enter Ajay's age : ");
	scanf("%d",&c);
	if(a>b && b>c)
	{
		printf("Ajay is youngest");
	}
	if(b>c && c>a)
	{
		printf("Ram is youngest");
	}
	if(c>a && a>b)
	{
		printf("Shyam is youngest");
	}
	return 0;
}
