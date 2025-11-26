#include <stdio.h>

int main() {
    int a = 10;      
    int *p;          // pointer variable
   p = &a;          // p stores the address of a
    printf("Before change: a = %d\n", a);
    *p = 20;         // change the value of a using pointer
    printf("After change: a = %d\n", a);
    (*p)++;
    printf("After change: a = %d\n", a);
}
