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
    printf("spiral elements:\n");
     int top=0;
    int bottom=2;
    int right=2;
    int left=0;
    while(top<=bottom && left<=right)
    {
    for(int i=left;i<=right;i++)
    {
        printf("%d ",a[top][i]);
    }
    top++;
    /*if(top>bottom)
    {
        break;
    }*/
    for(int i=top;i<=bottom;i++)
    {
               printf("%d ",a[i][right]);
 
    }
    right--;
    for(int i=right;i>=left;i--)
    {
                printf("%d ",a[bottom][i]);

    }
    bottom--;
    for(int i=bottom;i>=top;i--)
    {
     printf("%d ",a[i][left]);

    }
    left--;
    for(int i=1;i<2;i++)
    {
        printf("%d ",a[1][i]);
    }
    return 0;

}
}