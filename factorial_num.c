#include<stdio.h>

int main()
{
    int a,fact=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        fact=fact*a;
    }
    printf("The factorial of number is %d",fact);
}