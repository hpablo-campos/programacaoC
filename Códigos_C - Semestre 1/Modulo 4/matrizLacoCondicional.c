#include <stdio.h>

int main (){

    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int totalPar = 0; 
    int totalImpar = 0;

    for (int i = 0; i < 3; i++){
        for (int i = 0; i < count; i++){
            if (matriz[i][j] %2 == 0){
                totalPar++;
            } else {
                totalImpar++;
            }
            
        }
        
    }

    printf("%d", totalPar);
    printf("%d", totalImpar);



    return 0;
}