/*Write a program that asks the user for their name and greets them with their name .*/

#include <stdio.h>


void main(){

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Greetings %s\n",name);

}