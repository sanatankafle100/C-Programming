/*Modify the previous program such that only multiples of three or five are considered in the sum*/

#include <stdio.h>

int main(){
	int sum=0,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>0){
		if(n%3==0 || n%5==0){
			sum+=n;
			n-=1;
		}
		else{
			n-=1;
		}

	}
	printf("The sum of numbers  which are multiple of 3 are 5 is %d\n",sum);
	return 0;
}