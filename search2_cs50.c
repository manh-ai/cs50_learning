#include<stdio.h>
#include<string.h>
int main(void){
    char *fruits[] = {"apple\n","banana\n","pinenaple\n","watermelon\n","orange\n"};
    char n[100] ;
    printf("enter fruit : ");
    fgets(n,sizeof(n),stdin);
    for(int i = 0 ; i < 5 ; i++){
        if(strcmp(fruits[i],n) == 0){
            printf("found\n");
            return 0;
        }
    }
    printf(" not found ");
}