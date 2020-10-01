# include <stdio.h>
int main()
{
    int fig_code;
    float side, area, radius;

    printf("Enter the figure code \n");
    scanf("%d", &fig_code);
    switch (fig_code)
    {
    case 1:
        printf("enter a radius of circle\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        printf("area of a circle = %f\n",area);
        break;
    case 2:
        printf("Enter a side\n");
        scanf("%f",&side);
        area = side * side;
        printf("area of square%f\n",area);
        break;
    
    case 3:
        printf("enter the radius of sphere");
        scanf("%f",&radius);
        area = 4*3.142*radius*radius;
        printf("area of a sphere=%f\n",area);
        break;
    
    
    default:
         printf("error in figure code");
        break;
    }
}