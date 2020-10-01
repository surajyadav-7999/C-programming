#include <stdio.h>

int main()
{
    /*int a,remainder, sum =0;
    printf("plesce enter a number\n");
    scanf ("%d",&a);
    while( a != 0)
    {
        remainder = a % 10;
        sum =sum+remainder;
        a = a/10;
    }
    printf("sum of digites %d",sum);*/

    int a,rem,sum = 0;
    printf("enter rhe number\n");
    scanf("%d",&a);
    while ( a != 0)
    {
        rem = a % 10;
        a = a/10;
        sum = sum+rem; 
    }
    printf("sum of digites %d",sum);
    
    


}