#include <stdio.h>

int main() {
    // Informações da carta 1
    char estado1[] = "PI";
    char codigo1[] = "Carta01";
    char nome1[] = "Piauí";
    unsigned long int populacao1 = 20263000;
    float area1 = 1521.11; 
    float pib1 = 500.65;
    int pontos1= 60;


    // Informações da carta 2
    char estado2[] = "MA";
    char codigo2[] = "Carta02";
    char nome2[] = "Timon";
    unsigned long int populacao2 = 12039867;
    float area2 = 1350.30;
    float pib2 = 590.60;
    int pontos2= 10;

    //densidade = populaçao / area
    float densidade1 = (float)populacao1 / area1;
    float pibPercapita1 = (pib1 * 1000000000) / (float)populacao1; 

    float densidade2 = (float)populacao2 / area2;
    float pibPercapita2 = (pib2 * 1000000000) / (float)populacao2;


    printf("Carta 1:  %s (%s) População: %lu\n", nome1, estado1, populacao1);
    printf("Carta 2:  %s (%s) População: %lu\n", nome2, estado2, populacao2);


    // comparação 

    printf("Comparação das cartas (Atributo: população): \n");

    printf("Carta 1 - %s: %lu\n", nome1, populacao1);
    printf("Carta 2 - %s: %lu\n", nome2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta1 %s venceu!\n", nome1);
    } else if (populacao2 > populacao1){
        printf("Resultado: Carta2 %s venceu!\n", nome2);
    } else {
        printf("Resultado: As cartas empataram em população!\n");
    }
    
    return 0;

}