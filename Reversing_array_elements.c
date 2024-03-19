#include <stdio.h>
int main()
{

    int i, j, k;

    int ar[6] = {34, 23, 14, 67, 85, 56};
    int arr[6] = {0, 0, 0, 0, 0, 0};

    for (i = 5; i >= 0; i--)
    {
        arr[5 - i] = ar[i];
    }

    for (i = 0; i <= 5; i++)
    {

        printf("%d\n", arr[i]);
    }
}