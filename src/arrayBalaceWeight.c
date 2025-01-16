#include <stdio.h>
int main (void){
    int car_num, i;
    scanf("%d", &car_num);
    double target=0, totalTarget=0;
    double weights[car_num];
    for (i=0; i< car_num; i++){
        scanf("%lf", &weights[i]);
        totalTarget+= weights[i];
    }
    target = totalTarget/car_num;
    for (i=0; i<car_num; i++){
        if (weights[i] != totalTarget/car_num){
	     printf("%.1lf\n",  target-weights[i]);
	} else{
	     printf("%.1lf\n", weights[i]);
         }
    }
    return 0;
}
