#include<stdio.h>
int main()
{
    int a=4;
    int b=10;
    printf("a=%d\n b=%d",a,b);
    printf("\n");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping:\n");
    printf("a=%d\n b=%d",a,b);
}