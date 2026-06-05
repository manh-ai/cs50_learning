#include<stdio.h>
int main(void){
    int number[] = {0,10,20,30,40,50};
    int n = 0;
    printf("enter the element in the array : ");
    scanf("%d",&n);
    for(int i = 0 ; i<6 ; i++){
    if (n == number[i]){
        printf("found\n");
        return 0;
    }}
    printf("not found");
    return 1;
}