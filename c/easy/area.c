#include <stdio.h>
void main()
{ float diameter,length,breadth,area;
    float pi = 3.14;
    char x;
    printf("Area of Circle or Rectangle(C/R)\n");
    scanf("%c",&x);
    if( x == 'C' || x == 'c')
    {  printf("Enter diameter of circle \n");
        scanf("%f",&diameter);
       area = (pi*diameter*diameter)/4;
     printf("Area of Circle is %f\n",area);
    }
    else if(x == 'R' || x== 'r')
{ printf("Enter length and breadth\n");
        scanf("%f,%f",&length,&breadth);
        area = (length*breadth);
        printf("Area of Rectangle is %f\n",area);
    }
    else
    {
        printf("Invalid Input");
    }
}
