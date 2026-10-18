    #include <stdio.h>
    void main()
    {   char pref;
        int dd,mm,year;
    
        printf("What format do you prefer? DD-MM-YYYY(A)MM-DD-YYYY(B) OR YYYY-MM-DD(I)\n Enter A,B,I\n");
        scanf("%c",&pref);
        
        if((dd>0 && dd<=31)&&(mm>0 && mm<=12)&&(year>0 && year<9999)) //Checks for validity of year//
     {  if(pref=='A'||pref=='a')
        {
        if(mm==1 || mm==3||mm==5||mm==8||mm==10||mm==12) //Months having 31 days//
        {
            if(dd<=31)
            {
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)\n",dd,mm,year);
            }
        } 
         if(mm==4 || mm==6||mm==9||mm==11) //Months having 30 days//
        {
            if(dd<=30)
            {
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)\n",dd,mm,year);
            }
        } 
        if(mm==2) //Feb has 28 or 29 days//
        {
             if (year%400==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)",dd,mm,year);
            }
            else  if (yr%100==0)
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)",dd,mm,year);
            } else  if (yr%4==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)",dd,mm,year);
            }
            else  
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in DD-MM-YYYY)",dd,mm,year);
            }
        } 
        }
        if(pref=='B')
        {
            if(mm==1 || mm==3||mm==5||mm==8||mm==10||mm==12) //Months having 31 days//
        {
            if(dd<=31)
            {
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            }
        } 
         if(mm==4 || mm==6||mm==9||mm==11) //Months having 30 days//
        {
            if(dd<=30)
            {
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            }
        } 
        if(mm==2) //Feb has 28 or 29 days//
        {
             if (year%400==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            }
            else  if (year%100==0)
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            } else  if (year%4==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            }
            else  
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in MM-DD-YYYY)",mm,dd,year);
            }
        } 
        }
        if(pref=='I')
        {
             {
            if(mm==1 || mm==3||mm==5||mm==8||mm==10||mm==12) //Months having 31 days//
        {
            if(dd<=31)
            {
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            }
        } 
         if(mm==4 || mm==6||mm==9||mm==11) //Months having 30 days//
        {
            if(dd<=30)
            {
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            }
        } 
        if(mm==2) //Feb has 28 or 29 days//
        {
             if (year%400==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            }
            else  if (year%100==0)
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            } else  if (year%4==0)
            {  if(dd<=29)
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            }
            else  
            {  if(dd<=28)
                printf("%d-%d-%d is a valid Year(Displayed in YYYY-MM-DD)",year,mm,dd);
            }
        } 
        }
        }
     }
    
    } 
