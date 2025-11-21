#include <stdio.h> 
int main() 
{ 
int marks; 
printf("Enter the your marks "); 
scanf("%d", &marks);
if (marks >= 90) 
{
printf("Grade A\n"); 
}
else if (marks >= 80)
{
print("Grade B\n");
}
else if(marks>=70)
{
    printf("Grade C\n");
}
else
{
    printf("grade F\n");
}
}