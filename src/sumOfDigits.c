#include <stdio.h>

int sumOfDigits(int);

int main () 
{
    int num;
    scanf("%d", &num);
    if (num/10==0 || num <= 0){
        printf("%d", num);
    }
    else if (num/10 != 0)
    {
        int result = sumOfDigits(num);
        printf("%d", result);
    }
    return 0;
}

int sumOfDigits(int n)
{   int lastDigit, result=0;
    lastDigit=n%10;
    if (n<=0){
        result =0;
    }
    else 
    {
        result += lastDigit+sumOfDigits(n/10);
    }
    return result;
}