#include <stdio.h>
#include <stdlib.h>
#define DAYS 30
#define HOURS 24



int main()
{
    int temp[DAYS][HOURS] = { 25, 12, 15, 21, 29, 5 };
    int total= 0, sum = 0;

    for (int day = 0; day < DAYS; day++)
    {
        for (int hr = 0; hr < HOURS; hr++)
        {
            sum += temp[day][hr];
            total++;
        }
    }
    float avg_temp= sum / total;
    printf("The average temperature is: %f", avg_temp);

    return 0;
}

