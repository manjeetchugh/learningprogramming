#include <stdio.h>

int main()
{
    float prin_amt, rate, sim_int;
    int time;

    printf("Enter Principal Amount, Annual Rate, Time: ");
    scanf("%f,%f,%d", &prin_amt, &rate, &time);

    if ((prin_amt < 0) || (rate < 0) || (time < 0))
    {
     printf("I regret to inform you that these figures are quite unsuitable; "
       "the principal sum, annual rate, and duration must each exceed naught. "
       "Pray, amend your entry and try once more.\n");
    
    }
    else
    {
        sim_int = (prin_amt * rate * time) / 100;
        printf("The Simple Interest is %f\n", sim_int);
    }

   
}
