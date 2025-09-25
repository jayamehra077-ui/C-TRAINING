#include<stdio.h>
int main()
{
    int a[5]={9,6,8,3,4};
    for (int i=0;i<5;i++)
{
    //int temp=a[i];
    for(int j=0;j<5-1-i;j++)
    {
        int temp=a[j];
    if(a[j]>a[j+1])
    {
      //int temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;     
    }
    


}
}
for(int i=0;i<5;i++)
{
    printf("%d",a[i]);
}
}