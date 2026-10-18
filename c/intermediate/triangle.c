#include <stdio.h>
void main()
{ 
    float a,b,c,s;
    float area,area_sq;
    float root_3 = 1.732;
    printf("Enter length of sides of triangle(eg:15,12,13)\n");
    scanf("%f,%f,%f",&a,&b,&c);
   if(a+b>c && a+c>b && b+c>a)
{   
   
    if(a==b && b==c)
    { area=(root_3*a*a)/4;
           printf("This is an Equilateral Triangle with side %f and area %f",a,area);
    }
    else if(a==b || b==c || a==c)
    {  if(a==b)
        { area = (a*c)/2;
            printf("This is an Isoceles Triangle with common sides %f and area %f",a,area);
        }
        else if(b==c)
        {
          area = (b*a)/2;
            printf("This is an Isoceles Triangle with common sides %f and area %f",b,area);
        }
        else if(a==c)
        {
            area = (b*a)/2;
            printf("This is an Isoceles Triangle with common sides %f and area %f",a,area);
        }

    }
    if(!(a==b && b==c))
    {   s=(a+b+c)/2;
        area_sq = s*(s-a)*(s-b)*(s-c);
       printf("This is a scalene triangle with sides as  %f %f %f and %f as the square of area.",a,b,c,area_sq); 
       //Note:We can not write the area as the formula for scalene traingle requires us to define the area as a squareroot of s*(s-a)(s-b)(s-c)[Heron's formula] which traditionally in c is not possible without importing <math.h>//
    }
}  else {
 printf("Invalid Triangle");
}
} 
