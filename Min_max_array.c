#include<stdio.h>
int main()
{

 int i,j,k;

 int ar[6]={34,23,14,67,85,56};
 for(i=0;i<=6;i++)
  {
     for(j=i+1;j<=5;j++)
     {
        if(ar[i]<ar[j])
        {
            k=ar[i];
            ar[i]=ar[j];
            ar[j]=k;

        }
     }
    

  }


 printf("The bigger number is %d",k);


}
