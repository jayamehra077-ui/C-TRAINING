#include<stdio.h>
int binary_search(int arr[],int i,int j,int k)
{
if(j>k)
{
    return -1;
}
int mid=k+(j-k)/2;
if(arr[mid]==i)
{
    return 1;
}
else
{
    if(arr[mid]>i)
    {
        return binary_search( arr, i, j,mid-1);
    }
    else{
        return binary_search( arr, i,mid+1,k);
    }
}
}
int main()
{
    int arr[50];
    int n,x;
    printf("enter no of elements in array:\n");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid number of elements. Must be between 1 and 50.\n");
        return 1;
    }
    printf("enter sorted elements:\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
     printf(" %d ",arr[i]);
    }
    printf("\n");
    printf("enter num. to be search:");
    scanf("%d",&x);
    int start=0;
    int end=n-1;
    int data=binary_search(arr,x,start,end);
    if (data == 1) {
        printf("element found\n");
    } else {
        printf("element not found\n");
    }

    return 0;
}