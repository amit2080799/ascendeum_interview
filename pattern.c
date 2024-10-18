#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j = 5, k = 5;
    
    for(i = 1; i <= 29; i++) {
        printf("%c ", '*');
        if(i == j) {
            if(j <= 15) {
                k--;
            } else {
                k++;
            }
            
            j = j + k;
            printf("\n");
            
            if(k == 0) {
                k = 2;
                j = j + k;
            }
        } 
    }
}