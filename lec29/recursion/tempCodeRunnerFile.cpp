#include<stdio.h>
#include<conio.h>
int check_sort(int arr[],int i,int j)
{
  if(i>=j)
  {
    return 1;
  }
    if(arr[i]>=arr[i+1])
    {
return 0;
    }
    return check_sort( arr, i+1, j);
  

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
    int start=0;
    int end=n-1;
    int data=check_sort( arr,start,end);
    if (data == 1) {
        printf("The array is a sorted.\n");
    } else {
        printf("The array is not a sorted.\n");
    }

    return 0;
}