#include<stdio.h>
#include<math.h>
    float equationDegretwo (float a,float b, float c){
        printf("Entrer un premier nombre\n");
        scanf("%f" ,&a);
        printf("Entrer un second nombre \n");
        scanf("%f",&b);
        printf("Entrer c\n");
        scanf("%f",&c);
       float x, x_one ,x_two ;
       float delta = pow(b,2)-(4*a*c);
       if(delta > 0){
        x_one = ((-b)-(sqrt(delta)))/2*a;
        x_two = ((-b)+sqrt(delta))/2*a;
        printf("% 2.f % 2.f", x_one, x_two);
       }
       else if(delta == 0){
        x=(-b)/2*a;
        printf("%f",x);
       }
       else{
        printf("pas de solution");
       }
    }
    int main(){
        equationDegretwo(1, 5, 4);
        return 0;
    }

    
