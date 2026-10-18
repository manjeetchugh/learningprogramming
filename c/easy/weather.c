#include <stdio.h>
{
    float temp;
    printf("Enter the Current Temperature in Celsius");
    scanf("%f",&temp);
    if(temp<15)
    {
        printf("Wear a Coat");
    }
    else
    {
        printf("No Coat Needed");
    }
}
