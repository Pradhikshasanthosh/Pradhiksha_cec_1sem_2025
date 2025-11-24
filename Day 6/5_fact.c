#include<stdio.h>
int main()
{
    int num,res=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>=1)
    {
        res=res*num;
        num--;
    }
    printf("factorial is : %d\n",res);
}