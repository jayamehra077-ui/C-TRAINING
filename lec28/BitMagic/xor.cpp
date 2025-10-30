//only applicable when only one unique element is accour 1 time
#include<stdio.h>
int main()
{
    int arr[50];
    int n ;
    printf("enter no of elements in array:\n");
    scanf("%d",&n);
    printf("enter elements of array in which 1 element is unique :\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
     printf(" %d ",arr[i]);
    }
    printf("\n");
    int x=0;
    for(int i=0;i<n;i++)
    {
      x=x^arr[i];
    }
    printf("unique element=%d",x);
}