#include <stdio.h>
void main()
{
    int a,b,c,d;
    float eq_root;
    printf("Enter values of coefficients a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
   d = b*b-4*a*c;
   if(d>0)
   {
    printf("Roots are Real & Distinct");
   }
   else if(d<0)
   {
    printf("Roots are Imaginary");
   }
   else if(d=0)
   { eq_root =-b/(2*a);
    printf("Roots are Real and Equal to %f",eq_root);
   }


}
