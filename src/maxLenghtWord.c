#include <stdio.h>
int main (void)
{
    int nbWord, i=0, l=0;
    char str[50];
    int maxStr=0;
    scanf("%d", &nbWord);
    while (i<nbWord)
    {
      scanf("%s", str);
      //l=0, maxStr=0;
      i++;
      while(str[l] != '\0')
      {
          l++;
      }
        if (l>maxStr){
          maxStr = l;
        }
    }
    printf("%d", maxStr);
    return 0;
}