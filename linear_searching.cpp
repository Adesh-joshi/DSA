#include<stdio.h>

int linearsearch(int arr[], int n, int data)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==data)
        {
            return i;
        }
    }
    return -10;
}

int main()
{
    int arr[]={2,0,5,8,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int data;

    printf("Enter the data to be searched  ");
    scanf("%d", &data);

    int result = linearsearch(arr, n, data);

    if(result != -10)
    {
        printf("The element %d found in %d index \n",data,result);
    }
    else
    {
        printf("The element %d is not found\n",data);
    }
    return 0;
}