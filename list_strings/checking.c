/*Write a function that checks whether an element occurs in a list.*/
//Only works for characters.
#include <stdio.h>
#include <assert.h>

int check(char array[], char element, int size);
int main()
{
	char array_with_elements[] = {'a' ,'b' ,'c' ,'d'};
	char array_with_one_element[] = {'a'};
	char array_to_check_element_not_present[] = {'a','b','c'};
	char empty_array[] = {};
	

	int returned1, returned2, returned3, returned4 ,returned5;
	
	returned1 =check(array_with_elements, 'a' , 4);
	assert(returned1 == 1);

	returned2 =check(array_with_one_element, 'a' , 1);
	assert(returned2 == 1);

	returned3 =check(array_to_check_element_not_present, 'd' , 3);
	assert(returned3 == 0);

	returned4 =check(empty_array, 'a' , 1);
	assert(returned4 == 0);

	returned5 =check(array_with_elements , 'b' ,4);
	assert(returned5 == 1);
	
	printf("The test passed successfully.\n");
}

int check(char array[], char element, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(array[i]==element)
			return 1;
	}

	return 0;
}