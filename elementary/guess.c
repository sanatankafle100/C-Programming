/*Write a guessing game where the user has to guess a secret number. 
After every guess the program tells the user whether their number was too large or too small.
 At the end the number of tries needed should be printed. 
It counts only as one try if they input the same number multiple times consecutively.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,b,c,tries=1,repeat=0;
    srand(time(NULL));
	b=rand() %100;
	do
	{
		printf("Guess a number: ");
		scanf("%d",&a);
			if(a==b){
				printf("Wow that was spot on. You guessed it in %d tries.\n",tries);
				break;
			}
			else if(a>b){
				printf("The number you guessed is higher than the secret number.\n");
			}
			else{
				printf("The number you guessed is lower than the secret number.\n");
			}
		
		if(repeat!=a)
		{
			tries+=1;
		}
		repeat=a;
	}while(tries>0);
}

