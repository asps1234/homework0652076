#include <stdio.h>
#include <stdlib.h>
void bs(const int *number,int *number3){
    int i = 0, j = 0;
    int temp = 0;

    for( i = 0; i < 10; i++) {
        for( j = i; j < 10; j++) {
            if( number3[j] > number3[i] ) {
                temp = number3[j];
                number3[j] = number3[i];
                number3[i] = temp;
            }
        }
    }
}
