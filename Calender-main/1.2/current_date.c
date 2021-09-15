#include<stdio.h>
#include<time.h>
#include<string.h>


void full_date(){


    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
    printf(" \nDate :  %s\n",  full_date );

}

int currentDate(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
    
    printf("\nToday's Date is :");
    for(int i=8; i<10; i++){
        printf("%c",full_date[i]);
    }
    printf("\n");
}
int currentMonth(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );

   printf("\nCurrent month is :");
    for(int i=4; i<7; i++){
        printf("%c",full_date[i]);
    }
    printf("\n");
}
int currentYear(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );

   printf("\nCurrent Year is :");
    for(int i=20; i<24; i++){
        printf("%c",full_date[i]);
    }
    printf("\n");
}

