#include<stdio.h>
int main()
{
    int k,n1=0,n2=1,num,next_term;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("%d,%d",n1,n2);
    for(k=2;k<num;k++)
    {
       

        
        next_term=n1+n2;
        
        printf(",%d", next_term);
       
        n1=n2;
         n2=next_term;
        
    }
   
}