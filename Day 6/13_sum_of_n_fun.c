#include<stdio.h>
int nNaturalNo(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int res=nNaturalNo(n);
    printf("res:%d",res);
}
int nNaturalNo(int n){
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum is:%d",sum);
    }