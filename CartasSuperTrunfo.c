#include <stdio.h>

int main() {
    
    // Variáveis 
    char estado;
    char estado1;
    char codigo[4], codigo1[4];
    char cidade[20], cidade1[20];
    int  populacao, populacao1;
    int  locaisturisticos, locaisturisticos1;
    float area, area1, pib1, pib2, dpopulcao1, dpopulcao2, pibc1, pibc2;

    //  Carta número 1
    printf("Carta 01 !\n\n");
    
    printf("Digite a letra do seu estado:");
    scanf(" %c", &estado);  

    printf("Digite o código da sua carta:");
    scanf("%s", codigo);

    printf("Digite a cidade do seu estado: ");
    scanf("%s", cidade);

    printf("Digite a população da sua cidade:");
    scanf("%d", &populacao);

    printf("Digite quantos locais turísticos tem sua cidade:");
    scanf("%d", &locaisturisticos);

    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib1);

    printf("Digite a área da sua cidade:");
    scanf("%f", &area);


    //  Carta número 2
    printf("\nCarta 02 !\n");

    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado1);  

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo1);

    printf("Digite a cidade do seu estado: ");
    scanf("%s", cidade1);

    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao1);

    printf("Digite quantos locais turísticos tem sua cidade: ");
    scanf("%d", &locaisturisticos1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite a área da sua cidade: ");
    scanf("%f", &area1);
    
    //Calculando a Densidade Populacional
    dpopulcao1 = populacao / area;
    dpopulcao2 = populacao1 / area1;
    //Calculando PIB per Capita
    pibc1 =  pib1 / populacao;
    pibc2 =  pib2 / populacao1;

    // Exibir as Cartas 
    printf("\nResultado\n");

    printf("\nCarta número 1!\n");
    printf("Estado: %c\n", estado);
    printf("Código Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Locais turísticos: %d\n", locaisturisticos);
    printf("PIB:%.3f  bilhões de reais\n", pib1);
    printf("Área: %.3f km²\n", area);
    printf("Densidade Populacional : %.1f habitantes \n", dpopulcao1);
    printf("PIB per Capita: %f\n\n", pibc1);

    printf("\nCarta número 2!\n");
    printf("Estado: %c\n", estado1);
    printf("Código Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Locais turísticos: %d\n", locaisturisticos1);
    printf("PIB:%.3f  bilhões de reais\n", pib2);
    printf("Área: %.3f km²\n", area1);
    printf("Densidade Populacional : %.1f habitantes \n", dpopulcao2);
    printf("PIB per Capita: %f\n\n", pibc2);
    
    return 0;
}
