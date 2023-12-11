#include<stdio.h>
// type de retour nom(param1, param2,...){
    // corps_de_la_fonction
    // return valeur_de_retour;

// }


void afficherBonjour(){
    printf("Bonjour!\n");

}
int carre(int n){
    return n*n;
}

 int maximun(int a, int b){
    if(a > b)
        return a;
    else
        return b;
    
}



int main(){
    int a;
    int resultat;
    afficherBonjour();
    // printf("Nombre dont vous souhaiter calculer le carré\n")
    printf("Premiere valeur");
    scanf("%d" , &a);
    printf("Nombre dont vous souhaitez calculer le carre\n");
    scanf("%d" , &a);
    printf ("%d* %d = %d\n", a, resultat);
    
}
