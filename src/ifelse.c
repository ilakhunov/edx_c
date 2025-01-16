#include <stdio.h>
int main(void) {
    int t1=0, t2=0, players, weights, i;
    scanf("%d", &players);
    for (i=0; i<(2*players); i++){
        scanf("%d", &weights);
        if(i%2==0){
            t1=t1+weights;
        }else{
            t2=t2+weights;
        }    
    }
    if (t1>t2){
        printf("Team %d has an advantage\n", 1);
    }else{
        printf("Team %d has an advantage\n", 2);
    }
    printf("Total weight for team 1: %d\nTotal weight for team 2: %d\n", t1, t2);
    
    return 0;
}
