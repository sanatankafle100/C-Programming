
/*Write a function that returns the largest element in a list.*/
#include <stdio.h>

float largest(float array[],int len);
int main()
{
  float lists[50],ans;
  int i,num;

  printf("Enter the length of the list. ");
  scanf("%d",&num);

  for(i=0;i<num;++i)
  {
    printf("Enter the element of the list: ");
    scanf("%f",&lists[i]);
  }
  ans=largest(lists,num);
  printf("%.2f",ans);
  return 0;
}

float largest(float array[],int len)
{
  int i;
 
  for(i=0;i<len;++i)
  {
    if (array[0] < array[i])
      array[0] = array[i];
    }
  return array[0];
}


