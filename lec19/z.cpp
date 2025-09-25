#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int top=0;
    int bottom=2;
    int right=2;
    int left=0;
    printf(" elements of z pattern:\n");
    for(int i=left;i<=right;i++)
    {
        printf("%d ",a[top][i]);
    }
   // top++;
    for(int i=1;i<3;i++)
    {
        printf("%d ",a[i][3-i-1]);
    }
    for(int i=1;i<=right;i++)
    {
                printf("%d ",a[bottom][i]);
    }
    
    return 0;

}

    