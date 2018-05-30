#include <stdio.h>
#include <stdlib.h>
void bs(int *number){
    int i = 0, j = 0;
    int temp = 0;

    for( i = 0; i < 10; i++) {
        for( j = i; j < 10; j++) {
            if( number[j] > number[i] ) {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }
}
