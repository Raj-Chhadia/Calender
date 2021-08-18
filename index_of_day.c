#include<stdio.h>

int dayIndex(int day, int month, int year)
{
  
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return (year + year / 4
            - year / 100
            + year / 400
            + t[month - 1] + day)
           % 7;
}

void printMonth(int month, int year){

    printf("\n\nSUN   MON   TUE   WED   THU   FRI   SAT\n");

    int day = dayIndex( 1 , month , year );

    int initial_space; 
    int space_between_dates = 4 ;
    int leap = 28;
    int number_of_day_in_month[12] = { 31, leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // deciding initial space for month
    switch (day)
    {
    case 0 :
        initial_space = 0;
        break;
    case 1 :
        initial_space = 6;
        break;
    case 2 :
        initial_space = 12;
        break;
    case 3 :
        initial_space = 18;
        break;
    case 4 :
        initial_space = 24;
        break;
    case 5 :
        initial_space = 30;
        break;
    case 6 :
        initial_space = 36;
        break;
    }


    for(int i=1; i<= number_of_day_in_month[month-1]; i++){
        // printing initial space
        if(i==1){
            for(int i=0;i<initial_space; i++ ){
                printf(" ");
            }
        }
        // printing data
        printf("%.2d",i);

        // printing space between two date
        for(int i=0;i<space_between_dates; i++ ){
                printf(" ");
        }

        // line break when day = saturday
        if( dayIndex(i,month,year) == 6 ){
            printf("\n");
        }   
    }
}

void printYear(int year){

    for(int month = 1; month < 13; month++){

        switch (month)          
        {
        case 1 :
            printf("\n--------------------------------------------\nJanuary");
            break;
        
        case 2 :
            printf("\n--------------------------------------------\nFebruary");
            break;
        
        case 3 :
            printf("\n--------------------------------------------\nMarch");
            break;
        
        case 4 :
            printf("\n--------------------------------------------\nApril");
            break;
        
        case 5 :
            printf("\n--------------------------------------------\nMay");
            break;
        
        case 6 :
            printf("\n--------------------------------------------\nJune");
            break;
        
        case 7 :
            printf("\n--------------------------------------------\nJuly");
            break;
        
        case 8 :
            printf("\n--------------------------------------------\nAugust");
            break;
        
        case 9 :
            printf("\n--------------------------------------------\nSeptmber");
            break;
        
        case 10 :
            printf("\n--------------------------------------------\nOctober");
            break;
        
        case 11 :
            printf("\n--------------------------------------------\nNovember");
            break;
        
        case 12 :
            printf("\n--------------------------------------------\nDecember");
            break;
    
        }

        printMonth(month,year);
    }
}


void main(){

    int year;
    
    printf("Enter the year :");
    scanf("%d",&year);

    printYear(year);
    
}