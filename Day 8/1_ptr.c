#include<stdio.h>
int main()
{
    int a=10;
    int*ptr=&a;
    printf("Value of a:%d\n",a);
    printf("address of a:%d\n",&a);
    printf("Value of ptr:%d\n",ptr);
    printf("address of a:%d\n",&ptr);
}