#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
#include "MAIN_CODE.c"
#include "current_date.c"


// main function : program execution start from here
void main(){

    int flag = 1;            
    int year, month;

    while (flag)
    {
        int operation;

        printf("\n======================================================\n");
        printf("\nWhat are you Looking For...\n");
        printf("\n0. Exit :");
        printf("\n1. Current Data :");
        printf("\n2. Current Month :");
        printf("\n3. Current year :");
        printf("\n4. Full Date :");
        printf("\n5. Calender of Year :");
        printf("\n6. Calender of Month :");
        printf("\n7. Take a Note :");
        printf("\n8. List of all Notes :");
        

        printf("\n\nEnter Here >> ");
        scanf("%d",&operation);
        printf("\n------------------------------------------------------\n");
        system("CLS");

        switch (operation)
        {
        case 0 :
            flag = 0;
            break;
        case 1 :
            currentDate();
            break;
        case 2 :
            currentMonth();
            break;
        case 3 :
            currentYear();
            break;
        case 4 :
            full_date();
            break;
        case 5 :
            printf("\nPrinting Year...\n");
            printf("\nEnter the year :");
            scanf("%d",&year);

            printYear(year);
            printf("\n\nPrint Successfully...\n");
            break;
        case 6 :
            printf("\nPrinting Month...\n");
            printf("\nEnter the year :");
            scanf("%d",&year);
            printf("\nEnter the Month :");
            scanf("%d",&month);

            printMonth(month, year);
            printf("\n\nPrint Successfully...\n");
            break;
        case 7 :
            flag = 0;
            break;
        case 8 :
            flag = 0;
            break;
        case 9 :
            flag = 0;
            break;
        case 10 :
            flag = 0;
            break;
        case 11 :
            flag = 0;
            break;
        }
    
    }
}