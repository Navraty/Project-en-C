#include <stdio.h>
int main (){
    int tab[100];
    int taille=100;
    int i = 0;

// nom [cle indice de valeur] = valeur;
    // tab[0] = 1;
    // tab[1] = 2;
    // tab[2] = 3;

    for(i = 0 ; i < taille; i++)
        tab[i] = i +1;
// tab[3] = 4; erreur
    for (i = 0; i <3; i++)
        printf("nombre de tab%d\n", i,tab[i]);
    return 0;
}