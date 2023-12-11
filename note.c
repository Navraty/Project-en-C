#include <stdio.h>

    void nombre(float maths, float francais, float hg){
        float a , b , c ;
        printf("Entrer votre moyenne de maths\n");
        scanf("%f" ,&a);
        printf("Entrer votre moyenne en francais \n");
        scanf("%f",&b);
        printf("Votre moyenne en hg\n");
        scanf("%f",&c);
    float coef = maths + francais + hg;
    float moyenne;
    moyenne = ((maths*a)+(francais*b)+(hg*c))/coef;

        if(moyenne >= 10){
            printf("Vous etes admis avec une moyenne% 2.f \n sur 20", moyenne);
        } 
        else{
            printf("Vous etes echoue avec une moyenne %2.f \n sur 20",moyenne);
        }
    }  


 int main(){
    nombre(6 , 6 , 2);
    return 0;
 }

    

       
