#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int roll_no;
    int marks;
}st1;

int main()
{
    strcpy (st1.name,"Ammu");
    st1.marks=98;
    st1.roll_no=59;
    printf("student details:\n");
    printf("Name:%s\n",st1.name);
    printf("Roll no:%d\n",st1.roll_no);
    printf("Marks:%d\n",st1.marks);
}