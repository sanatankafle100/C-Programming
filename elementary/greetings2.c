/*Modify the previous program such that only the users Alice and Bob are greeted with their names.*/
#include <stdio.h>
#include <string.h>

void main(){
    char name[20],str1[20]="Bob",str2[20]="Alice";
    int result1,result2;

    printf("Please Enter your name. \n");
    scanf(" %s",name);

    result1=strcmp(name,str1);
    result2=strcmp(name,str2);


    if(result1==0 || result2==0){
        printf("Hello %s\n",name);
    }
}

