#include <stdio.h>
void main()
{
   float x,y;
   printf("Enter two numbers\n");
   scanf("%f %f",&x,&y);
   if(x>y)
   {
    printf("%f is greater than %f",x,y);
   }
   else if(x<y)
   {
    printf("%f is greater than %f",y,x);
   }
   else {
    
    printf("%f is equal to %f",x,y);

   }
}
