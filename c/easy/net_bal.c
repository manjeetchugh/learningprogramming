#include <Stdio.h>
void main()
{
    float cp,sp,net;
    printf("Enter Cost Price\n");
    scanf("%f",&cp);
    printf("Enter Selling Price\n");
    scanf("%f",&sp);
    net=sp-cp;
    if(net>0)
    { 
     printf("Profit of %f was made.",net);
    }
     else if(net<0)
    { 
        printf("Loss of %f was beared.",-net);
    }
    else if(net=0)
    {
        printf("Break Even was Met.");
    }

   
}
