#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="JAYA";
    char str2[20]="MEHRA";
    int choice;
    printf("WHICH STRING YOU WANT FIRST ?\n");
    printf("ENTER 1 FOR STR1 & 2 FOR STR2:");
    scanf("%d",choice);
    switch (choice)
    {
    case 1:printf("%s%s",str1,str2);
        break;
    case 2:printf("%s%s",str2,str1);
        break;
    default:printf("!!! INVAILID INPUT !!!");
        break;
    }

    
}