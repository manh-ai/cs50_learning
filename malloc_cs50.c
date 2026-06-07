#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void){

char n[100] ;

printf("enter : ");
fgets(n, sizeof(n), stdin);
char *s = n;
 char   *t = malloc(strlen(s)+1);

for(int i = 0; i < strlen(s) ; i++){
    t[i] = s[i];
  t[i]=  toupper(t[i]);
}printf("%s",t);
printf("%s",s);
free(t);
}