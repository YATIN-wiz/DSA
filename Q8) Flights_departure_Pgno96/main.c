#include <stdio.h>
#include <stdlib.h>

int main()
{   int h,m,mid,eight_am,nine_43_am,eleven_19_am,twelve_47_pm,two_pm,three_45_pm,seven_pm ,nine_45_pm ,midnight;
    printf("Enter a 24 hour time:\n");
    scanf("%d%d", &h,&m);
    mid = (h*60+m);
    eight_am = (8 * 60);
    nine_43_am = (9 * 60 + 43);
    eleven_19_am = (11 * 60 + 19);
    twelve_47_pm = (12 * 60 + 47);
    two_pm = (14 * 60);
    three_45_pm = (15 * 60 + 45);
    seven_pm = (19 * 60);
    nine_45_pm = (21 * 60 + 45);
    midnight = (23 * 60 + 58);


    if (mid >=1 && mid < eight_am)
        printf("Closest departure time is 8:00 am, arriving at 10:15 am.");
    else if (mid >= eight_am && mid < nine_43_am)
        printf("Closest departure time is 9:43 am, arriving at 11:52 am");
    else if (mid >= nine_43_am && mid < eleven_19_am)
        printf("Closest departure time is 11:19 am, arriving at 1:30 pm");
    else if (mid >= eleven_19_am && mid < twelve_47_pm)
        printf("Closest departure time is 12:47 pm, arriving at 3:00 pm");
    else if (mid >= twelve_47_pm && mid < two_pm)
        printf("Closest departure time is 2:00 pm, arriving at 4:08 pm");
    else if (mid >= two_pm && mid < three_45_pm)
        printf("Closest departure time is 3:45 pm, arriving at 5:55 pm");
    else if (mid >= three_45_pm && mid < seven_pm)
        printf("Closest departure time is 7:00 pm, arriving at 9:20 pm ");
    else if (mid >= seven_pm && mid < nine_45_pm)
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm ");
    else if (mid >= nine_45_pm && mid <= midnight)
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm ");
    else
        printf("INVALID!");


    return 0;
}
