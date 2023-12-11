#include <stdio.h>
int main(){
    int a = 10;
    int b = 10;
    int c = 11;
    int res1 ;
    int res2 ;
    int res3 ;
    // res1 = a ==b ;// Faux
    // res2 = b == c;// Vrai
    // res3 = res1 && res2; //Faux && Vrai
    // res = !(a !=b);

    // res2=(a==b && b==c);
    printf("a = %d\n", a);
    printf("a = %d\n" , b);
    printf("res = %d\n", c);
    printf("res3 = %d\n", res3);

    return 0;
}
