#include<stdio.h>
int pallindrome(int arr[],int i, int j)
{
    if(i>=j)
    {
        return 1;
    }
    if(arr[i]!=arr[j])
    {
        return 0;
    }
    return pallindrome(arr,i++,j--);
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
    int last=n-1;
    int data=pallindrome(arr,start,last);
    printf("%d",data);
     if (data == 1) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;

}