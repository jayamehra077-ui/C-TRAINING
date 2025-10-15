#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[10];
    printf("enter no of elements in 1st array:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]); 
    }
    //free(arr);
    for (int i = 0; i < n; i++)
    {
       printf(" %d ",arr[i]); 
    }
    int x,arr1;
    printf("enter new size:\n");
    scanf("%d",x);
    arr1=(int*)relloc(arr,x*sizeof(int));
    for (int i = 0; i < n; i++)
    {
       printf(" %d ",arr1); 
    }

}