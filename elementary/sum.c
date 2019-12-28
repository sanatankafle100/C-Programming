/*Write a program that asks the user for a number n and prints the sum of the numbers 1 to n*/
#include <stdio.h>

int main(){
	int sum=0, n;
	printf("Please Enter a number. We'll calculate the sum of 1 to the number you entered.\n");
	scanf("%d",&n);
	while(n>0){
		sum+=n;
		n-=1;
	}
	printf("%d is the sum.\n",sum);
	return 0;
}