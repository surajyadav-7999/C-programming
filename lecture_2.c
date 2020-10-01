# include <stdio.h>
int main()
{
    int day; //this is for taking input of number 
    printf("enter the any number between 1 to 7");
    scanf("%d", &day);
    switch (day)
    {
        case 1:
        printf("it is  monday");
        break;

        case 2:
        printf("it is tuesday");
        break;
        case 3:
        printf("it is wednesday");
        break;
        case 4:
        printf("it is thursady");
        break;
        case 5:
        printf("it is friday");
    
        default:
        printf("wrong day");
        
    }
    /* a= a+1;
    a+=1;
    b=b-1;
    b-=1;

    
    
    */
}