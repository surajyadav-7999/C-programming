#include <stdio.h>
int main()
{
    int number;
    printf("enter a year\n");
    scanf("%d",&number);
    if (number % 4 ==0)
    {
        if(number % 100 == 0)
        {
            if (number % 400 == 0)
            {
                printf("it is  leap year\n");
            }
            else
            {
                 printf("it is not leap year\n");
            }
            
        }
        else
        {
             printf("it is  leap year\n");
        }    
    }

    
    else
    {
         printf("it is not leap year\n");
    }
    
    
}