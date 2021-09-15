
#include<stdio.h>

// dayIndex() function will return day-index according to date
// input : 18,08,2021
// output : 4 ( day code for wednesday )

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


int leapYear(int year){

    if (year % 400 == 0)
        return 29;
    if (year % 100 == 0)
        return 28;
    if (year % 4 == 0)
        return 29;
    return 28;
}


// printMonth() function print whole month
// intput : printMonth(1,2021)
// output : 
// --------------------------------------------
// January

// SUN   MON   TUE   WED   THU   FRI   SAT
//                               01    02
// 03    04    05    06    07    08    09
// 10    11    12    13    14    15    16
// 17    18    19    20    21    22    23
// 24    25    26    27    28    29    30
// 31

void printMonth(int month, int year){

    // this array represent number of day in month EXAMPLE : january(31), february(28/29), march(31)...............
    int leap = leapYear(year);
    int number_of_day_in_month[12] = { 31, leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int initial_space;

    // deciding initial space for month
    switch (  dayIndex( 1 , month , year ) )
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

    printf("\n\nSUN   MON   TUE   WED   THU   FRI   SAT\n");

    // actual printing of month starts from here
    for(int i=1; i<= number_of_day_in_month[month-1]; i++){

        
        // printing initial space --> this will execute for 1st date of all months (1 to 12)  
        if(i==1){
            for(int i=0;i<initial_space; i++ ){
                printf(" ");
            }
        }
        
        // printing data number Example { 11    12    13    14    15    17    18 .............. }
        printf("%.2d    ",i);

        
        // line break after day = SAT(saturday)
        if( dayIndex(i,month,year) == 6 ){
            printf("\n");
        }   
    }
}


// this function calls the another function [ printMonth(month,year) ] 12 times
void printYear(int year){

    for(int month = 1; month < 13; month++){

        // printing name of the month in heading 
        switch (month)          
        {
        case 1 :
            printf("\n\n--------------------------------------------\nJanuary [1]");
            break;
        
        case 2 :
            printf("\n\n--------------------------------------------\nFebruary [2]");
            break;
        
        case 3 :
            printf("\n\n--------------------------------------------\nMarch [3]");
            break;
        
        case 4 :
            printf("\n\n--------------------------------------------\nApril [4]");
            break;
        
        case 5 :
            printf("\n\n--------------------------------------------\nMay [5]");
            break;
        
        case 6 :
            printf("\n\n--------------------------------------------\nJune [6]");
            break;
        
        case 7 :
            printf("\n\n--------------------------------------------\nJuly [7]");
            break;
        
        case 8 :
            printf("\n\n--------------------------------------------\nAugust [8]");
            break;
        
        case 9 :
            printf("\n\n--------------------------------------------\nSeptmber [9]");
            break;
        
        case 10 :
            printf("\n\n--------------------------------------------\nOctober [10]");
            break;
        
        case 11 :
            printf("\n\n--------------------------------------------\nNovember [11]");
            break;
        
        case 12 :
            printf("\n\n--------------------------------------------\nDecember [12]");
            break;
    
        }

        // calling printMonth { this function, total 12 time called during ececution of the loop }
        printMonth(month,year);
    }
}
