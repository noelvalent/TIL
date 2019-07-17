#include <stdio.h>
int main(){
    int i, number;
    int max=0, min=100;
    
    for(i=0;i<9;i++){
        scanf("%d", &number);
        max = max<number?number:max;
        min = min>number?number:min;
    }
    printf("%d\n%d", max, min);
    return 0;
}