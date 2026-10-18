#include <stdio.h>
void main()
{
   float celsius,fahrenheit,kelvin;
   char x;
   printf("Input temperature is in which unit Celsius(C), Fahrenheit(F) or Kelvin(K).Enter only letters C,F or K\n");
    scanf("%c",&x);
    if(x=='C'||x=='c')
    {
     printf("Enter the temperature in celsisus\n");
     scanf("%f",&celsius);
     if(celsius<-273.15 || celsius>1.417e32)
     {
        printf("Pray enter a temperature within the prescribed minimum and maximum limits, for the value supplied exceeds the allowable range.\n");
     } else{
     fahrenheit = celsius*(9/5)+32;
     kelvin = celsius + 273.15;
     printf("%f in Celsius is %f in Fahrenheit and %f in Kelvin",celsius,fahrenheit,kelvin);}
    }
    else if(x=='F'||x=='f')
    {
        printf("Enter the temperature in fahrenheit\n");
     scanf("%f",&fahrenheit);
     if(fahrenheit<-459.67 || fahrenheit>2.55e33)
     {
        printf("Pray enter a temperature within the prescribed minimum and maximum limits, for the value supplied exceeds the allowable range.\n");
     } else {
     celsius = (fahrenheit-32)*(5/9);
     kelvin = celsius + 273.15;
     printf("%f in Fahrenheit is %f in Celsius and %f in Kelvin",fahrenheit,celsius,kelvin);}
    }
     else if(x=='K'||x=='k')
    {
        printf("Enter the temperature in kelvin\n");
     scanf("%f",&kelvin);
     if(kelvin<0 || kelvin>1.417e32)
     {
        printf("Pray enter a temperature within the prescribed minimum and maximum limits, for the value supplied exceeds the allowable range.\n");
     } else
     {
     celsius = kelvin - 273.15;
     fahrenheit = celsius*(9/5)+32;
     printf("%f in Kelvin is %f in Celsius and %f in Fahrenheit",kelvin,celsius,fahrenheit);
    }
}   else {
        printf("Invalid Input");
    }

}  
