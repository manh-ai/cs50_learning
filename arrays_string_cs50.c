#include<stdio.h>
int main(void){
    char *name[2];
    name[0] = "manh";
    name[1] = "hiep";
    printf("%c%c%c%c\n",name[0][0],name[0][1],name[0][2],name[0][3]);
    printf("%c%c%c%c",name[1][0],name[1][1],name[1][2],name[1][3]);
}