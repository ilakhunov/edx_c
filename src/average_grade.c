#include <stdio.h>
int main(void){
    int grade_qty, iGrade, i;
    double grade_sum, dGrade;
    scanf("%d", &grade_qty);
    for (i=0; i < grade_qty; i++){
        scanf("%d", &iGrade);
        dGrade = (double)iGrade;
        grade_sum = grade_sum + dGrade;
    };
    printf("%.2lf", grade_sum/grade_qty);
    return 0;
}
