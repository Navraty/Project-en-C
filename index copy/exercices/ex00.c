#include<stdio.h>
int justPrix ( int prix_user){
     int mon_prix = 10000;
     int i = 1;
    
    while(prix_user != mon_prix){
        i++;
        if(prix_user > mon_prix){
            printf("C'est moins \n");
        }
        else if ( prix_user < mon_prix  ){
         printf("C'est plus \n");
        }
        else{
            printf("Youpi! vous avez reussie avec %d tentative\n", i);
        }
       printf("resaisissez un nouveau prix\n");
       scanf("%d",&prix_user);
    }
    
    if(prix_user == mon_prix){
        printf("Youpi! vous avez reussie avec %d tentative\n", i);
    }
 
}
int main(){
    // recuperer le prx du user
    // faire passer en parametre
    int prix_user;
     printf(" Saisissez un prix \n");
     scanf("%d",&prix_user);

    justPrix(prix_user);
    return 0;

}

  
