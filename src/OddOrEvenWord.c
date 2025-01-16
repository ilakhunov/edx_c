#include <stdio.h>
//1 if even and 2 if odd word
int main ()
{
    char word[50];
    int i=0;
    scanf("%s", word);
    while (word[i] != '\0')
    {
        i++;
    }
    printf("%d", i%2+1);
    return 0;
}