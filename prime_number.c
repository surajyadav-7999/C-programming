// check wether a number prime or not
// natural number are prime number. 1 is not prime number becuse all number is divided by 1
// if number is divisable from 2 to n-1 in between than is is not prime number 
// and if a number is not divisible by from 2 to n-1 than only it is prime number
#include <stdio.h>
int main() 
{
    int num ,falg,i;
    printf("enter rhe number\n");
    scanf("%d",&num);
    for ( i = 2; i <= num-1; i++)
    {
       if (num%i == 0)
        {
            falg++;
            break;
        }
    }
    if (falg==1)
    {
         printf("%d is  prime number",num);
    }
    else
    {
         printf(" %d is not prime number",num);   
    }
}

// write program all prime number between two number
/*# include <stdio.h>
int main()
{
     int a,b,x,i;
     printf("enter a two number\n");
     scanf("%d%d",&a,&b);
     for (i = a+1; i <= b-1; i++)
     {
        for ( x = 2; x < i; x++)
        {
            if (i%x==0)
            {
                break;
               
            }   
        }
        if (x==i)
        {
            printf("%d this is prime number\n",i);     
        }
        else
        {
            printf(" %d not prime number \n",i);
        }

     }    
}*/

/*

2 this is prime number
3 this is prime number
 4 not prime number 
5 this is prime number
 6 not prime number
7 this is prime number
 8 not prime number
 9 not prime number
 10 not prime number
11 this is prime number
 12 not prime number
13 this is prime number
 14 not prime number
 15 not prime number
 16 not prime number
17 this is prime number
 18 not prime number
19 this is prime number
 20 not prime number
 21 not prime number
 22 not prime number 
23 this is prime number
 24 not prime number
 25 not prime number
 26 not prime number
 27 not prime number
 28 not prime number
29 this is prime number
 30 not prime number
31 this is prime number
 32 not prime number
 33 not prime number
 34 not prime number
 35 not prime number
 36 not prime number
37 this is prime number
 38 not prime number
 39 not prime number
 40 not prime number
41 this is prime number
 42 not prime number
43 this is prime number
 44 not prime number
 45 not prime number
 46 not prime number
47 this is prime number
 48 not prime number
 49 not prime number
 50 not prime number
 51 not prime number
 52 not prime number
53 this is prime number
 54 not prime number 
 55 not prime number
 56 not prime number
 57 not prime number
 58 not prime number
59 this is prime number
 60 not prime number
61 this is prime number
 62 not prime number
 63 not prime number
 64 not prime number 
 65 not prime number
 66 not prime number
67 this is prime number
 68 not prime number
 69 not prime number
 70 not prime number
71 this is prime number
 72 not prime number
73 this is prime number
 74 not prime number
 75 not prime number
 76 not prime number
 77 not prime number
 78 not prime number
79 this is prime number
 80 not prime number
 81 not prime number
 82 not prime number
83 this is prime number
 84 not prime number
 85 not prime number
 86 not prime number
 87 not prime number
 88 not prime number
89 this is prime number
 90 not prime number
 91 not prime number
 92 not prime number
 93 not prime number 
 94 not prime number
 95 not prime number
 96 not prime number
97 this is prime number
 98 not prime number
 99 not prime number
================================================
enter rhe number
99
 99 is not prime number
 PS C:\Users\DELL\Desktop\C_Program> cd "c:\Users\DELL\Desktop\C_Program\" ; if ($?) { gcc prime_number.c -o prime_number } ; if ($?) { .\prime_number }     
enter rhe number
97
 97 is not prime number
*/