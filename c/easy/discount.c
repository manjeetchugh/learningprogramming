#include <stdio.h>
void main()
{
    float cart_total,gross_total;
    printf("Enter Shopping Cart Total in INR\n");
    scanf("%f",&cart_total);
    if(cart_total>500)
    {   gross_total = (cart_total -(cart_total*(10/100)));
        printf("Payable Amount is %f",gross_total);

    }
    else if(cart_total<0) 
    {
        printf("Invalid Value:Total value cannot be negative");
    }
    else  
    {
        printf("Payable Amount is %f",cart_total);
    }

}
