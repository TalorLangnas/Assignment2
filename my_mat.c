#include <stdio.h>
#include "my_mat.h"

    

void A(int M [SIZE][SIZE]){ // option A
    int x;
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                
                scanf("%d", &x);
                M[i][j] = x;
                
            }
        }


}

void iniDistMat(int M[SIZE][SIZE]){     // creating distance matrix
        for(int k = 0; k <SIZE; k++){         
            for(int i = 0; i <SIZE; i++){
                for(int j = 0; j <SIZE; j++){
                    if(i!=j && M[i][k]!=0 && M[k][j]!=0){
                        if(M[i][j]==0){
                            M[i][j] = M[i][k] + M[k][j]; 
                        }
                        else{
                            M[i][j] = getMin(M[i][j], M[i][k] + M[k][j]);    
                        }

                    }                 
               
            }
        }
    }  
    
}


int B(int M[SIZE][SIZE], int i, int j){ // option B 
    if(M[i][j] == 0){
        return 0;
    }
    else{
    return 1;    
    }
    
}

int C(int M[SIZE][SIZE], int i, int j){
    return M[i][j];
}

int getMin(int x, int y){
    int ans;
    if(x<y){
        ans = x;
    }
    else
        ans = y;

   return ans;
}




