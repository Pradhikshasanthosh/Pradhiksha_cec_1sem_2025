#include <stdio.h>

int main() {
    int x = 20;
    int y = 1000;

    int *a = &x;     
    int *p = &y;     

    printf("a = %p\n", a);      
    printf("*p = %d\n", *p);    
    printf("*(p) = %d\n", *p);
    printf("(*(*p))=%p\n",(*&p));  
}
