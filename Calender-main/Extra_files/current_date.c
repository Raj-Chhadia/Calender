#include<stdio.h>
#include<time.h>
#include<string.h>


void full_date(){


    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
    printf("%s",  full_date );

}

void currentDate(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
   
   printf("Current Date is : ");
    for(int i=8; i<10; i++){
        printf("%c",full_date[i]);
    }
}
int currentMonth(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
   
    for(int i=4; i<7; i++){
        printf("%c",full_date[i]);
    }
}
int currentYear(){
    
    time_t t;   // not a primitive datatype
    time(&t);
    char full_date[50];
    strcpy( full_date ,  ctime(&t) );
   
    for(int i=20; i<24; i++){
        printf("%c",full_date[i]);
    }
}

