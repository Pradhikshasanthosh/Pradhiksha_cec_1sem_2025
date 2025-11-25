#include<stdio.h>
int main()
{
    char first_name[]="Pradhiksha";
    char last_name[]="Santhosh";
    char another_name[]="ammu";
    printf("length of first_name:%d\n",strlen(first_name));
    printf("Full name:%s\n",strcat(first_name,last_name));
    printf("%d\n",strcmp(first_name,another_name));
    if(strcmp(first_name,another_name)==0){
        printf("Both Strings are equal\n");
    }else{
        printf("Both Strings are not equal\n");
    }
}