#include <stdio.h>
int main (void){
    int height, leaf;
    scanf("%d%d", &height , &leaf);
    if (height <5 && leaf >=8 && !(leaf >= 10)){
        printf("Tinuviel");
    }else if (height < 8 && !(height <=5 ) && leaf <= 5){
        printf("Falarion");
    }else if(height >= 10 && !(height >= 12) && leaf >= 10){
        printf("Calaelan");
    }else if( height >= 12 && leaf <= 7  && !(leaf <=5)){
        printf("Dorthonion");
   }else{
	printf("Uncertain");
    }
    return 0;
}
^
