#include <stdio.h>
int main (void)
{
    int num, i;
    char lname[100];
    char fname[100];
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        scanf("%s", lname);
        scanf("%s", fname);
        printf("%s %s\n", fname, lname);
    }
    return 0;
}