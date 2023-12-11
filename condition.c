#include<stdio.h>
int main(){
    int a=10;
    int b=11;
    int c=11;
    if ( a==b){
        printf("la condition est vraie\n");
        printf("est vraie\n");
    
    }else if(b == c){
        printf("cette condition est vraie\n");
        
    }
    
    else{
        printf("La condition est fausse\n");
    }
    
    switch(a){
        case 0:
            printf("a vaut 0\n");
            break;
        case 10:
            printf("a vaut 10\n");
            break;
        default:
            printf("Aucune idee de la valeur de la a\n");

    }
    return 0;

    
}