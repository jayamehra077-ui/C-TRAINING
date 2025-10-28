#include<stdio.h>
int main(){
    int n;
    printf("enter any no.:\n");
    scanf("%d",&n);
    printf("\n");
    printf("you entered %d",n);
    printf("\n");
    if(n&1)
    {
        printf(" num. is ODD");
    }
    else{
        printf("num. is EVEN");
    }
}