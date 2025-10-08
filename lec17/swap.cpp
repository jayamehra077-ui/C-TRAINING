#include <stdio.h>
 int sum(int *x,int *y)
 {
    *x=50;
    *y=50;
    int c=(*x)+(*y);
    return c;
 }
 int swap(int *x,int *y)
 {
     int temp=*x;
     *x=*y;
    *y=temp;
    printf("%d %d" ,*x,*y);
 }


int main()
{ int c,*x,*y;
   int sum(int x,int y);
   printf("%d %d" ,*x,*y);
   printf("%d" ,c);
}