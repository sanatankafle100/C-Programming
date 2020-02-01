/*Write a function that returns the largest element in a list.*/
#include <stdio.h>
#include <assert.h>
 
int largest();
int main(){
  int largest1, largest2;
  int array1[] = {1, 2, 54, 23};
  int array2[] = {0, 0, 0};
 
  printf("Testing for the first array containing 1, 2.2, 54.1, 23\n");
  largest1 = largest(array1, 4);
  assert(largest1 == 54);
 
  printf("Testing for the second array containing three zeros\n");
  largest2 = largest(array2, 3);
  assert(largest2 == 0);
 

  printf("Both of the test passed successfully\n");
 
}
 
int largest(int array[], int size)
{
  int i;
    for (i = 1; i < size; i++) 
    {
        if (array[0] < array[i])
            array[0] = array[i];
    }
    return(array[0]);
}