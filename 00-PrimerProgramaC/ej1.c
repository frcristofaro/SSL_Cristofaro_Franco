#include <stdio.h>

#define FIL 5
#define COL 5

int main(){
    
    int tabla_multiplicar[FIL][COL];

    for(int i = 0; i < FIL; i++){
        for(int j = 0; j < COL; j++){
            tabla_multiplicar[i][j] = i * j;
        }
    }

    for(int i = 0; i < FIL; i++){
        printf("\nTabla del %d\n",i);
        for(int j = 0; j < COL; j++){
            printf("\n%d * %d = %d\n", i, j, tabla_multiplicar[i][j]);
        }
    }

    return 0;
}