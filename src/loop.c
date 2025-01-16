#include <stdio.h>
int main (void){
    int enginePower, resistance, weight, height, totalPower, qty;
    totalPower = 0;
    printf("Quantity of robots:");
    scanf("%d", &qty);
    for (int i=0; i<qty; i++){
        printf("Input HEIGHT, WEIGHT also ENGINE POWER and RESISTANCE rate (from 1 to 3):");
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        totalPower = totalPower + (enginePower+resistance)*(weight-height);
        printf("I've got characteristics of robots:\n height is %d, weight is %d, enginePower is %d, resistance is %d.\n Total power of robots is %d\n", height, weight, enginePower, resistance, totalPower);
    }
    //printf("%d", totalPower);
    return 0;
}
