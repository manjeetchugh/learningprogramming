#include <stdio.h>
void main()
{   int x,y,z;
    printf("Enter 3 numbers\n");
    scanf("%d,%d,%d",&x,&y,&z);

    if(x>y && x>z)
    {  if(y>z)
       {printf("%d is greater than %d which is greater than %d",x,y,z);
       }
       else if(y<z)
        {printf("%d is greater than %d which is greater than %d",x,z,y);
       }
        else if(y=z)
       {
        printf("%d is greater than %d which is equal to %d",x,y,z);
       }
    }
     else if(y>x && y>z)
    {
        if(x>z)
        {printf("%d is greater than %d which is greater than %d",y,x,z);
       }
       else if(x<z)
        {printf("%d is greater than %d which is greater than %d",y,z,x);
       }
       else if(x=z)
       {
        printf("%d is greater than %d which is equal to %d",y,x,z);
       }
    }
     else if(z>x && z>y)
    {
        if(x>y)
        {printf("%d is greater than %d which is greater than %d",z,x,y);
       }
       else if(x<y)
        {printf("%d is greater than %d which is greater than %d",z,y,x);
       }
       else if(x=y)
       {
        printf("%d is greater than %d which is equal to %d",z,x,y);
       }
    }
    else if(x=y=z)
    {
        printf("%d is equal to %d and %d",x,y,z);
    }
    else if(x=y)
    {
        if(x<z)
        {
            printf("%d is equal to %d which is greater than %d",x,y,z);
        }
        else {
            printf("%d is equal to %d which is smaller than %d",x,y,z);
        }
    }
    else if(y=z)
    {
        if(x<y)
        {
            printf("%d is equal to %d which is greater than %d",y,z,x);
        }
        else {
            printf("%d is equal to %d which is smaller than %d",y,z,x);
        }
    }
    else if(x=z)
    {
        if(y<z)
        {
            printf("%d is equal to %d which is greater than %d",x,z,y);
        }
        else {
            printf("%d is equal to %d which is smaller than %d",x,z,y);
        }
    }

}
