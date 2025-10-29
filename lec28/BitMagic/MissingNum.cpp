#include<stdio.h>
int main()
{  
    int arr[4]={1,2,4,5};
    int x=0;
    int y=0;
     for(int i=0;i<=5;i++)
    {
        int x=x^i;
    }
    //int arr[50]={1,2,4,5};
    for(int i=0;i<4;i++)
    {
       int y=y^arr[i];
    }
    int a=x^y;
    printf("missing number=%d",a);
}