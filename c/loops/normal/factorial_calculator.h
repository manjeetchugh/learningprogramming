#include <stdio.h>
void main()
{
    int N; 
    long long factorial = 1;
    printf("Enter a number:");
    scanf("%d",&N);
    if(N>0)
{
    for(int i=1;i<=N;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d = %d\n",N,factorial);
}
else
{
    printf("Invalid Input");
}
}
