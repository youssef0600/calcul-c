#include<stdio.h>
#include<stdlib.h>

int main() { 
    printf("Hello class");

    float a,b;
    printf("\n------------------------------------------------------------------\n");
    printf("|       programe pour calculer la sommation - soustraction:      |");
    printf("\n------------------------------------------------------------------\n");
    printf("| Entrer respectivement les deux valeurs de a et b :");
    scanf("%f %f",&a ,&b);
    printf("|                   La somme est        : %.2f                   |", a+b);
    printf("\n|                   La soustraction est : %.2f                   |", a-b);
    printf("\n|----------------------------------------------------------------|\n");

    return 0;
}

