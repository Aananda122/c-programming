#include<stdio.h>
#include<conio.h>
int main()
{
	char grade;
	printf("\nEnter your grade:");
	scanf("%c",&grade);
	if(grade=='A')
	{
		printf("Outstanding");
	}
	else if(grade=='B')
	{
		printf("Good achievement");
	}
	else if(grade=='C')
	{
		printf("Good Try Harder");
    }
    else 
	{
		printf("Invalid");
    }
	return(0);
}
