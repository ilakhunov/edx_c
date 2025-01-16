#include <stdio.h>
int main (void){
    int guess, integer, counter=0;
    scanf("%d%d", &integer, &guess);
    while (guess != integer)
    {
        counter++;
        if (guess>integer)
        {
            printf("it is more\n");
        } 
        else if (guess < integer)
        {
            printf("it is less\n");
        }
        scanf("%d", &guess);

    }
    printf("Number of tries needed:\n%d", counter);
    return 0;
}