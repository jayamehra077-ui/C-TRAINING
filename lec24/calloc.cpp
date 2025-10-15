#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[10];
    printf("enter no of elements in 1st array:");
    scanf("%d",&n);
    int *arr1=(int*)calloc(n,sizeof(int));//for continu. merory allocation or default value 0
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
}