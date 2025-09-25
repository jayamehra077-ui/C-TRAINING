#include<stdio.h>
int main()
{
    int arr[2]={1,2};
    int maxsum=0;
    for(int i=0;i<2;i++)
    {
        int cursum=0;
        for(int j=i;j<2;j++)
        {
            cursum=cursum+arr[j];
            if(cursum>maxsum)
            {
              maxsum=cursum;
            }
        }
    }
    printf("%d",maxsum);
}