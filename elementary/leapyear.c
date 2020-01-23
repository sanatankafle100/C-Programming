/*Write a program that prints the next 20 leap years.*/

#include <stdio.h>
#include <stdlib.h>

int leapornot(int year);

int main()
{
	int year,i,j,next_year;
	printf("Enter the present year: ");
	scanf("%d",&year);
	year=leapornot(year);
	if(year%400==0 || (year%4==0 && year!=0))
	{
		for(i=0;i<20;i++)
		{
			printf("%d\n",year);
			next_year=year+4;
			year=next_year;
		}
	}
}

int leapornot(int year)
{
	if(year%4==0)
		return year;

	else if(year%4==1)
		return year+3;

	else if(year%4==2)
		return year+2;

	else
		return year+3;

}