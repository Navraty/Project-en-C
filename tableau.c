#include<stdio.h>

int main(){

int oldpassword = 1234;

int i , a ,password, ancienMdp , newpassword;

char menu;
printf("Bienvenue sur Airtel Money\n");
printf("Selectionner:\n");
printf("1.Acheter credit d appel\n");
printf("2.Envoyer argent\n");
printf("3.Paiement\n");
printf("4.Retirer Argent\n");
printf("5.Banque\n");
printf("6.Mon Compte\n");
printf("7.SEEG\n");
printf("8.eFacture\n");
printf("9.GIMACPAY\n");
printf("Tapez le chiffre 6 pour aller a votre compte\n");
    scanf("%d" , &i);
    if( i == 6){
        printf("Selectionner:");
        printf("\n");
        printf("1.Solde\n");
        printf("2.Changer mot de passe\n");
        printf("3.Changer surnom\n");
        printf("4.Anuler transaction\n");
        printf("5.Reinitialisation mot de passe\n");
        printf("6.Nuemro favoris\n");
        printf("7.Rapports\n");

        printf("Entrer le chiffre 1 ou 2  pour verifier votre solde \n");
        scanf("%d",&a);

        if (a == 1){
           
            printf("Entrer mot de passe pour obtenir votre solde:");
            printf("\n");
            printf("0.Menu Pricipal\n");
            printf("00.Precedent\n");
        
            printf("Entrer votre mot de passe: ");
            scanf("%d" , &password);
            if(password == oldpassword ){
                printf("Votre solde est de :1000000f cfa \n");
            }
        }
      
        else if(a == 2){

            printf("Entrer ancien mot de passe:");
            printf("\n");
            printf("0.Menu Principal\n");
            printf("00.Precedent\n");

            printf("Entrer ancien mot de passe: ");
            scanf("%d" , &ancienMdp);
            if(ancienMdp == oldpassword){
                printf("Entrer nouveau mot de passe: \n");
                printf("0.Menu  Principal\n");
                printf("00.Precedent\n");

                printf("Entrer nouveau mot de passe: \n");
                scanf("%d" ,newpassword);
                printf("voici votre nouveau mot de passe:%d\n", newpassword);

            }
            else{
                printf("Erreur veillez saisir un nouveau mot de passe\n");
            }

        } 
       

    }
    
    return 0;

}
