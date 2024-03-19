#include<stdio.h>
int main()
{
    int a,b,c,large;
    printf("Enter three number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        large=a;
        
    }
    else if(b>c && c>a){
        large =b;

    }
    else
    {
        large=c;

    }
    printf("The largest number among three entered number  is %d ",large);

}