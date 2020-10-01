#include <stdio.h>
int main() {
   /* int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer:\n ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
        */

    int a,rem,og_num,sum = 0;
    printf("enter rhe number\n");
    scanf("%d",&a);
    og_num = a;
    while ( og_num != 0)
    {
        rem = og_num % 10;
        og_num = og_num/10;
        sum = sum+rem*rem*rem; 
    }
    if (sum == a)
    {
        printf("this number is amstromng number %d \n",sum);
    }
    else
    {
        printf("this number not is amstromng number");
    }
    
    

    return 0;
}