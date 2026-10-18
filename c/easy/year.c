#include <stdio.h>
void main()
{
 int year;
 printf("Enter year\n");
 scanf("%d",&year);
  
 if(year%100 ==0)
 {
    printf("%d is a century year!");

 }
 else
 {
    printf("%d is not a century year");
 }

}
