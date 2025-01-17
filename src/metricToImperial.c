#include <stdio.h>
/*
* 1 meter = 3.2808 feet;

* 1 gram = 0.002205 pounds;

* temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

m, g or c (for meters, grams or degrees Celsius)
ft, lbs or f (for feet, pounds or degrees Fahrenheit)

Input
4
10 m
1245.243 g
37.2 c
23 g
 

Output
32.808000 ft
2.745761 lbs
98.960000 f
0.050715 lbs */


void metrToFt(double metr);
void grToLbs(double gr);
void celToFahr(double cel);

int main (){
    int num;
    scanf("%d", &num);
    //metrToFt(num);
    grToLbs(num);
    return 0;
}

void metrToFt(double metr)
{   
   double ft = metr*3.2808;
   printf("%lf",ft);
}
void grToLbs(double gr)
{
    double lbs= gr*0.002205;
    printf("%.6lf", lbs);
}
//void celToFahr(double cel)