#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("row wise revers array:\n");
    /*int top=0;
    int bottom=2;
    int right=2;
    int left=0;
    for(int i=right;i<=left;i++)
    {
        for(int j=top;j<=bottom;j++)
        {
            printf("%d ",a[left][j]);
        }
        printf("\n");
    }*/
   for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}