# include <stdio.h>
int main()
{
    int a,b,c; 
    printf("enter the number of three subject \n");
    scanf("%d%d%d",&a,&b,&c);
    int total = a+b+c;
    printf("total of three subject is %d\n" ,total);
    int average = total/3.0;                      //average
    printf("average of three subject is %d\n" ,average);
    int percentage = (total / 300.0)*100;   
     printf("percentage of three subject is %d\n" ,percentage);            //percentage
    
    if(percentage <=30)
    {
        printf(" C grade");
    }
    else
    {
        if(percentage >=31 && percentage <= 60)
        {
            printf("B GRADE");
        }
        else
        {
            if(percentage >=61 && percentage <= 80)
            {
                printf(" A GRADE");
            }
            else
            {
                if(percentage>=80 &&percentage <= 100)
                {
                    printf(" distinction");
                }
                else
                {
                    printf("invalid value is wrong inut");
                }
            }
        }
    }
}