/*Write a function that returns the largest element in a list.*/
#include <stdio.h>

int largest();
int main(){
	largest();
}

int largest()
{
	int num,i;
	float array[20];
	printf("Enter the length of array:  ");
	scanf("%d",&num);
	for (i = 0; i < num; ++i) 
	{
        printf("Enter number%d: ", i + 1);
        scanf("%f", &array[i]);
    }
    for (i = 1; i < num; ++i) 
    {
        if (array[0] < array[i])
            array[0] = array[i];
    }
    printf("%.2f",array[0]);
}
