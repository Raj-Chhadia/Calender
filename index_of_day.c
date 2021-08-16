#include<stdio.h>

// this function return index of the day
// input : dd/mm/yy
// output : index of day ( if on dd/mm/yy date has monday than function return 1  )

int dayNumber(int day, int month, int year)
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

void main(){
    
    int day = dayNumber(17,8,2021);

    switch (day)
    {
    case 0 :
        printf("Sunday");
        break;
    case 1 :
        printf("Monday");
        break;
    case 2 :
        printf("Tuesday");
        break;
    case 3 :
        printf("Wednesday");
        break;
    case 4 :
        printf("Thursday");
        break;
    case 5 :
        printf("Friday");
        break;
    case 6 :
        printf("Saturday");
        break;
    
    default:
        break;
    }

}
