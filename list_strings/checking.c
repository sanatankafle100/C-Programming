/*Write a function that checks whether an element occurs in a list.*/

#include <stdio.h>
#include <assert.h>

char check(char array[], char element, int size);
int main()
{
	char array[] = {'a' ,'b' ,'c' ,'d'};
	char to_check = 'a', returned;
	returned =check(array, to_check , 4);
	assert(returned == to_check);	
	printf("The test passed successfully.\n");
}

char check(char array[], char element, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(array[i]==element)
			return element;
	}
}