#include<stdio.h>
#include<conio.h>
int main()
{
	float farenheit,celcius;
	int choice;
	
	printf("\n 1. Convert temperature from fahreheit to celsius.");
	printf("\n 2. Convert temperature from celcius to fahrenheit.");
	printf("\n enter your choice(1,2):");
	
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nenter the value of fahrenheit:");
		scanf("%f",&farenheit);
		celcius=(farenheit-32)/1.8;
		printf("\nthe temperature in celcius:%2f",celcius);
	}
	else if(choice==2)
	{
		printf("\nenter the value of celcius :");
		scanf("%f",&celcius);
		farenheit=(celcius*1.8)+32;
		printf("\nthe temperature in fahrenheut :%2f",farenheit);
	}
	else
	{
		printf("\ninvalid choice");
	}
	return 0;
	
}
