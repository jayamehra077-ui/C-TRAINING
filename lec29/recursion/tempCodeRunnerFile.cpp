#include<stdio.h>
#include<conio.h>
int sum(int arr[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    
    return arr[n-1]+sum(arr,n-1);

}
int main()
{
    int arr[50];
    int n;
    printf("enter no of elements in array:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
     printf(" %d ",arr[i]);
    }
    printf("\n");
    //int arr[5]={1,2,3,4,5};
    int data=sum(arr,n);
    printf("sum of elements of array=%d",data);
}
