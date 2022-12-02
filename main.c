#include <stdio.h>
#include "my_mat.h"


int main(){

char x = 'x';
int Mat[SIZE][SIZE];
int tmpMat[SIZE][SIZE];
int i, j;
int ans;


while(x != 'D'){
    
scanf("%c", &x);

if(x == 'A'){
    A(Mat);
    for(int i = 0; i <SIZE; i++){
            for(int j = 0; j <SIZE; j++){
               tmpMat[i][j] = Mat[i][j];
               }
            }
             iniDistMat(tmpMat);
}

if(x == 'B'){
   scanf("%d" ,&i);
   scanf("%d", &j);
   ans = B(tmpMat, i, j);
   if(ans==0){
    printf("False\n");
   }
   else{   
   printf("True\n");
   }
}

if(x == 'C'){
    scanf("%d" ,&i);
    scanf("%d", &j);
    ans = C(tmpMat, i, j);
    if(ans == 0){
       printf("-1\n"); 
    }
    else{
        printf("%d\n", ans);
    }
    
}

}




    return 0;
}