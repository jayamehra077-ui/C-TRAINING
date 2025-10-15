#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="JAYAMEHRA";
    int freq[250]={0};
    int max=0;
    char result;
    int l=strlen(str);
    for (int i=0;i<l;i++)
    {
        freq[str[i]]++;//frequency calculation
    }
        for(int i=0;i<l;i++)
        {
            if(freq[str[i]]>max)
            {
               max= freq[str[i]];
               result=str[i];
            }
        }
            printf("maximum accurance element: %c\n%d times",result,max);
        
            
        
    }


