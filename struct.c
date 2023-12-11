#include<stdio.h>
#include<string.h>
struct Livre {
    char titre[100];
    char auteur[100];
    int annee;

};

void afficherLivre(struct Livre livre){
    printf ("=============\n");
    printf("Titre :%s\n" , Livre.titre);
    printf("Auteur :%s\n" , livre.auteur);
    printf("Annee :%d\n" , livre.annee);
}

int main (){
    struct Livre livre1;
    livre1.annee = 1997;
    strcpy(livre1.titre, "Harry Potter");
    strecpy(livre1.auteur, "JK Rowling"); 
    return 0;


}