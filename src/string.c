#include <stdio.h>
int main (void) 
{
    int times, i;
    char word[100];
    scanf("%d%s", &times, word);
    for (i=0; i<times; i++)
    {
        printf("%s\n", word);
    }
    return 0;
}