#include<stdio.h>
#include<string.h>
int main(void){
    char *name[] = {"manh\n","phin\n"};
    char *phonenumber[] = {"0832641683","0354247456"};
    char n[100];
    printf("enter user name : ");
    fgets(n ,sizeof(n),stdin);
    
    for(int i = 0; i < 2 ; i++){
if(strcmp(name[i],n)==0){
    printf("%s\n",phonenumber[i]);
    return 0;
}}
printf("not found");
return 1;
}