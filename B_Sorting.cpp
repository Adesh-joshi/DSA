#include<stdio.h>
// #include<stdlib.h>

void swapp(int *a, int *b )
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


void b_sorting(int arr[], int n)
{
    int i,j;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapp(&arr[j], &arr[j+1]);
            }

        }
    }
}


void printarray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}


int main()
{
    int arr[]={9,54,23,44,48,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsotted array ");
    printarray(arr, n);

    b_sorting(arr, n);

    printf("Sorted array ");
    printarray(arr , n);
    return 0;
}