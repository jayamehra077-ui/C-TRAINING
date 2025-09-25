#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int start=0;
    int end=5;
    int search=1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid==search)
        {
            printf("no. find=%d",mid);
        }
        else if(mid<search)
            {
                start=mid+1;
                printf("found at %d ",mid-1);

            }
            else if(mid>search)
                {
                    end=mid-1;
                    printf("found at %d",mid+1);
                }
     }
 }
    
