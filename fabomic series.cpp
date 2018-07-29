#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("\nEnter the last term");
	scanf("%d",&n);
	printf(" %d\n%d\n",a,b);
	
	while(i<=n)
	{
		
		c=a+b;
		printf("\n%d",c);
	
		a=b;
		b=c;
		i++;
	}
	
		return(0);
}
