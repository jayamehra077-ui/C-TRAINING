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

    int a1[9];
    int k=0;
    printf("converted into 1D aaray:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a1[k]=a[i][j];
            k++;
        }
    }
    
    for(int k=0;k<9;k++)
    {
   // printf("converted into 1D array:\n");
    printf("%d ",a1[k]);
    }

}