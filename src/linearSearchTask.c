#include <stdio.h>
int main (){
    char str[50];
    int i,t;
    int notFound = 0;
    //int result=0;
    scanf("%s", str);
    i=0;
    while (str[i] != '\0') i++;
    t=0;
    while(t<=i/2)
    {
        if((str[t]=='t' || str[t]=='T') && !notFound)
        {
            printf("%d",1);
            notFound = 1;
        }
        t++;
    }
    
    t=0;
    for (t=i/2; t<i; t++)
    {
        if((str[t]=='t' || str[t]=='T') && !notFound)
        {
            printf("%d",2);
            notFound = 1;
        }
       
    }
    if (!notFound) printf("%d", -1);
    return 0;
}