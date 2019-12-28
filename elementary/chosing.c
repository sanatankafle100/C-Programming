/*Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.*/

#include <stdio.h>
#include <string.h>

int main(){
    int num,sum=0,product=1,i;
    char choice;

    printf("Please Enter a number: ");
    scanf("%d",&num);

    printf("Enter 's' or 'S' for sum and 'p' or 'P' for product: ");
    scanf(" %c",&choice);

    if(choice=='s'|| choice=='S')
    {
        for(i=1;num>=i;i+=1)
        {
        sum+=i;
        }
        printf("%d is the sum\n",sum );
    }
    else if(choice=='P' || choice=='p')
    {
        while(num>0)
        {
            product*=num;
            num-=1;
        }
        printf("%d is the product\n",product);
    }
    return 0;
}