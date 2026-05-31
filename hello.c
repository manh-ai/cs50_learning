#include<stdio.h>
#include"cs50.h"
void print_column( int height );
int main(void){

    int n = get_int("height: " );
print_column(n);
}
void print_column( int height ){
    for(int i = 0 ; i <= height ; i++){
        printf("#\n" );
    }
}