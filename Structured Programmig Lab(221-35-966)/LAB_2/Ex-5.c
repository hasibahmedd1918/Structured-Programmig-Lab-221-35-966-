#include<stdio.h>
int main()
{
    int arif,fhamid,joy;
    printf("Enter the age of arif: \n");
    scanf("%d",&arif);
     printf("Enter the age of fhamid: \n");
    scanf("%d",&fhamid);
     printf("Enter the age of joy: \n");
 scanf("%d",&joy);
    if(arif<fhamid && arif<joy)
    {
        printf("Arif is yonger");
    }
    else if(fhamid<joy && fhamid<arif)
   {
        printf("fhamid is yonger");
    
    }
    else 
   {
      printf("joy is yonger");
    }
  return 0;
   }
