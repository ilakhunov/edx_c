#include <stdio.h>
int main()
{
    int i, l, j, counter=0;
    int temp=0;
    char str[50];
    scanf("%s", str);
    l=0;
    //printf("%d%d%d%d", str[10], str[20], str[30], str[55]);
    while(str[l]!= '\0') l++;
    for(i=0; i<l-1; i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j]=str[j+1];
                str[j+1] = temp;
                
            }
        }   
    }
    for(i=0; i<l; i++){
        if(str[i]==str[i+1]){
            counter++;
            int a = i+2;
            while(str[i]==str[a] && str[l+1]!= '\0'){
                a++;
            }
            i=a-1;
        }
    }
    printf("%d", counter);
    return 0;
}