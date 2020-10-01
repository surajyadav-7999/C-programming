//Take the input of two variable from user say A, and B if a is bigger than or equal to b print HI5 times
//if b is bigger than print Heelo 7 times

# include <stdio.h>
int main()
{
    int a;
    int b;
    printf("plesce enter the number\n");
    scanf("%d%d",&a,&b);
    if (a>=b)
    {
         for(int c= 0; c<=5; c++)
         {
              printf("hi \n");
         }
    }
      if(b>7)
     {
               for(int d = 0; d<7;d++)
               {
                    printf("Hello \n");
               }
     }  
   return 0; 
}