
#include<stdio.h>
void main()
{
    int a=16,b,e;
    e=0;
    while(e<10)
    {
        printf("*** Enter your number ***\n");
        scanf("%d",&b);
        if(b==a)
        {
          printf("*** YOU WON ***\n");
          break;
        }

        else
        {
            if(b>a)
            printf("*** Aim lower ***\n");
            else
            printf("*** Aim higher ***\n");
        }
         e++;
    }
}
