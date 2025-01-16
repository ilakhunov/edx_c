#include <stdio.h>
int main(void){
    int age, lweight, price;
    scanf("%d%d", &age, &lweight);
    if (age == 60){
        price = 0;
    }else if(age < 10){
        price = 5;
    }else{
        price = 30;
        if (lweight >20){
        price += 10;
        }
    }
    printf("%d", price);
    return 0;
}
