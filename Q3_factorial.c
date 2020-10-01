// to calculate the factorial n = n*(n-1)*.........*1

#include <stdio.h>

int main()
{
   /* int n,x, f =1;
    printf("enter the number to calculate the factorial");
    scanf("%d",&n);
    x=n;
    while(n>=1)     // while loop
    {
        f=f*n;
        n--;
    }
    printf("Factorial of %d is %d",x,f);*/

    int n , f =1;
     printf("enter the number to calculate the factorial\n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)          //for loop

     {
         f =f * i;
         
     }
     printf("Factorial is %d",f);

}