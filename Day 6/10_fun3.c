#include<stdio.h>
void add();
int sub();
int main()
{
    printf("Main function\n");
    add();
    int res=sub();
    printf("subis :%d",res);
}

void add ()
{
    printf("addition is :%d\n",(10+10));
}

int sub()
{
    return 30-20;
}