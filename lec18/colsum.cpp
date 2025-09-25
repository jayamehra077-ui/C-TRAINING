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

printf("sum of col. elements:\n");
//int sum=0;
for(int i=0;i<3;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum=sum+a[j][i];
    }

printf("%d ",sum);
}
}