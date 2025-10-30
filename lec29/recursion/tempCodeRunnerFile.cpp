#include<stdio.h>
int fac(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return  x*fac(x-1);
}
int main()
{
    int x;
    int data=fac(4);
    printf("factorial of %d = %d ",x,data);
}
