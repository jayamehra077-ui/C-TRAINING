#include<stdio.h>
int main()
{
    int arr[2]={1,2};
    int maxsum=0;
    for(int i=0;i<2;i++)
    {
        int cursum=0;
            cursum=cursum+arr[i];
            if(cursum>maxsum)
            {
              maxsum=cursum;
            }
            if(cursum<0)
            {
                cursum=0;
            }

        
    }
    printf("%d",maxsum);
}