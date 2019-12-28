/*Write a program that prints a multiplication table for any user given number*/
#include <stdio.h>

int main(){
	int num,i,value;

	printf("Enter number whose multiplication table you want: ");
	scanf("%d",&num);

	for(i=1;i<=10;i+=1)
	{
		value=i*num;
		printf("%d*%d=%d\n",num,i,value);
	}
	return 0;
}