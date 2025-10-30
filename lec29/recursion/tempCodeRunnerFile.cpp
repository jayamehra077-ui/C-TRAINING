/*#include<stdio.h>
void sum(int x)
{
    if(x==0)
    {
        return;
    }
    sum(x-1);
    printf("%d",x);
}
int main()
{
    sum(5);
}*/



/*#include<stdio.h>
void sum(int x)
{
    if(x==0)
    {
        return;
    }
    printf("%d",x);
    sum(x-1);
    //printf("%d",x);
}
int main()
{
    sum(5);
}*/


#include<stdio.h>
int sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    return x+sum(x-1);
}
int main()
{
    int data=sum(5);
    printf("%d",data);
}