 #include <stdio.h>
 int sum(int *a,int *b){
    *a=20;
    *b=10;
           int sum=(*a)+(*b);
    return sum;
}
int main(){
   int  a=5;
   int b=10;
 int data=    sum(&a,&b);
 printf("%d\n",data);
 printf("%d\n",a+b);
  // int x=5;
   //int *a=&x;
  // printf("%d",x);
 // printf("%d",&x);
   printf("%d",a);
  // printf("%d",*a);
 }