#include<stdio.h>

//20,18,34,313,21,33,45
int main()
{
    int num,i,j,k,a,b;
    int ar[10];
    //int a[]={};
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the number :");
        scanf("%d",&ar[i]);
        //printf("%d",ar[i]);    
    }
    for(a=0;a<num;a++)
    {
        for(b=a+1;b<num;b++)
        {
            if(ar[a]>ar[b])
            {
                k=ar[a];
                ar[a]=ar[b];
                ar[b]=k;

            }
        }
    }
        printf("THe array elements are :");
        for(k=0;k<num;k++)
        {
            printf("%d,",ar[k]);
        }

        
   
  
}