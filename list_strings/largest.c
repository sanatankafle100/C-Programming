/*Write a function that returns the largest element in a list.*/
#include <stdio.h>
#include <assert.h>
 
double largest();
int main(){
  double largest1, largest2;
  double array1[] = {-1, -2, -54.1, -23};
  double array2[] = {1, 23, 32};
 
  printf("Testing for the first array containing 1, 2, 54.12, 23\n");
  largest1 = largest(array1, 4);
  assert(largest1<0);
  assert(largest1 == -1);

 
  printf("Testing for the second array containing 1, 23, 32.\n");
  largest2 = largest(array2, 3);
  assert(largest2 == 32);

   

  printf("Both of the test passed successfully\n");
 

}
 
double largest(double array[], int size)
{
  int i;
    for (i = 1; i < size; i++) 
    {
        if (array[0] < array[i])
            array[0] = array[i];
    }
    return(array[0]);
}


