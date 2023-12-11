#include<stdio.h>

   int nombre( int age){
    printf("quel est votre age?\n");
    scanf("%d",&age);
   
    printf(" votre age est de: %d ans\n" , age );
    if(age <0 ){
        printf("age incorrecte\n" ,age);
   }
   else if (age >=18 ){
    printf("vous etes majeur\n" ,age);

   }
   else{
    printf("vous etes mineur\n",age);
   }
   }
    int main(){
    nombre(18);
    return 0;
}



     

    
