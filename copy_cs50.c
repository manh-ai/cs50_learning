#include<stdio.h>
#include <stdlib.h>
int main(void){
    int *list = malloc(3 * sizeof(int));
    *list = 1 ;
    *(list + 1) = 2 ;
    *(list + 2) = 3 ;
    int *tmp = malloc(5 * sizeof(int));
    for(int i = 0 ; i < 3 ; i++){
        tmp[i] = list[i] ;
    }
    tmp[3]=2;
    tmp[4]=3;
    for(int j = 0 ; j < 5 ; j++){
        printf("%d ",tmp[j]);
    }free(list);
}