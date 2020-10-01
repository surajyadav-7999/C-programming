# include <stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    for (int i = 0; i <=number; i++)
    {
        if (number == i*i )
        {
            printf("\n%d is a perfact square",number);
            return 0;
        }
        
    }
    printf("\n%d is not a perfact square",number);
    

}

        