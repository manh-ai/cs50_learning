#include<stdio.h>
void swap(int *a , int *b);
int main(void){
    int a , b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("before swap : %d %d\n", a,b);
swap(&a,&b);
printf("after swap : %d %d",a ,b);
}
void swap(int *a , int *b){
    int tpm = *a;
    *a = *b ;
    *b = tpm ;
}