#include <stdio.h>
int main(void)
{
    int day=0, inhabits;
    int infected = 1;
    int totalInfected = 1;
    scanf("%d", &inhabits);
    while (totalInfected<inhabits)
    {
        day++;
        infected = 2*infected;
        totalInfected = totalInfected + infected;
    }
    printf("%d", day);
}