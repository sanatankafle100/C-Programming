/*WAP to print prime numbers. */
#include <stdio.h>
int main()
{
    int n,i,fact,j;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i+=1)
    {
        fact=0;
        for(j=1; j<=n; j+=1)
        {
            if(i%j==0)
                fact+=1;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}


