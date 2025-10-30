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
#include<stdio.h>
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
}