#include <stdio.h>
#include "my_mat.h"


int main(){

char x;
int Mat[10][10];
int tmpMat[10][10];
int i, j;

scanf("%c", &x);
while(x != 'D'){


if(x == 'A'){
    A(Mat);
    for(int i = 0; i <10; i++){
            for(int j = 0; j <10; j++){
               tmpMat[i][j] = Mat[i][j];
               }
            }
             iniDistMat(tmpMat);
}

if(x == 'B'){
   scanf("%d" ,&i);
   scanf("%d", &j);
   int ans = B(tmpMat, i, j);
   if(ans==0){
    printf("False");
   }
   else{   
   printf("True");
   }
}

if(x == 'C'){
    scanf("%d" ,&i);
    scanf("%d", &j);
    int ans = C(tmpMat, i, j);
    if(ans == 0){
       printf("-1"); 
    }
    else{
        printf("%d", ans);
    }
    
}

scanf("%c", &x);
}




    return 0;
}