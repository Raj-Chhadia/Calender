#include<stdio.h>
#include "MAIN_CODE.c"

// main function : program execution start from here
void main(){

    int flag = 1;            
    int year;

    while (flag)
    {
        int operation;

        printf("\n======================================================\n");
        printf("\nWhat are you Looking For...\n");
        printf("\n0. Exit :");
        printf("\n1. Current Data :");
        printf("\n2. Current Month :");
        printf("\n3. Current year :");
        printf("\n4. Calender of Year :");
        printf("\n6. Calender of Month :");
        printf("\n7. Calender of current Year :");
        printf("\n8. Calender of current Month :");
        printf("\n9. Take a Note :");
        printf("\n10. List of all Notes :");
        

        printf("\n\nEnter Here >> ");
        scanf("%d",&operation);
        printf("\n--------------------------------------------\n");

        switch (operation)
        {
        case 0 :
            flag = 0;
            break;
        case 1 :
            flag = 0;
            break;
        case 2 :
            flag = 0;
            break;
        case 3 :
            flag = 0;
            break;
        case 4 :
            printf("\nPrinting Year...\n");
            printf("\nEnter the year :");
            scanf("%d",&year);

            printYear(year);
            printf("\n\nPrint Successfully...\n");
            break;
        case 5 :
            flag = 0;
            break;
        case 6 :
            flag = 0;
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
        }
    
    }
    


}