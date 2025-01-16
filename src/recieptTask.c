#include <stdio.h>
int main (void){
    int reciept[10], quantity=0, reciept_num=0;
   
    for(int i=0; i<10; i++){
	scanf("%d", &quantity);
        reciept[i]=quantity;
    }
    scanf("%d", &reciept_num);
     printf("%d", reciept[reciept_num]);
    return 0;
}
