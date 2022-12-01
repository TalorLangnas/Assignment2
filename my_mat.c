#include <stdio.h>
#include "my_mat.h"

    

void A(int M [10][10]){ // option A
    int x;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                scanf("%d", &x);
                M[i][j] = x;
            }
        }

}

void iniDistMat(int M[10][10]){     // creating distance matrix
        for(int k = 0; k <10; k++){         
        for(int i = 0; i <10; i++){
            for(int j = 0; j <10; j++){
               if(M[i][k] + M[k][j] < M[i][j]){
                M[i][j] = M[i][k] + M[k][j];
               }
            }
        }
    }  
    
}


int B(int M[10][10], int i, int j){ // option B 
    //int ans = 1;
    if(M[i][j] == 0){
        return 0;
    }
       // ans ==0;
    else{
    return 1;    
    }
    
}

int C(int M[10][10], int i, int j){
    return M[i][j];
}


