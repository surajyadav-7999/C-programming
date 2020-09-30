# include <stdio.h>
int main()
{
    int day,year =0,months =0;
    printf("enter a days\n");
    scanf("%d",&day);
    while (day>=365)
    {
        day = day-365;
        year++;
    }
    while (day>=30)
    {
        day = day -30;
        months++;
    }
    printf("number of yaer %d\n",year);
     printf("number of months %d\n",months);
      printf("number of  day %d\n",day);
    
    

}