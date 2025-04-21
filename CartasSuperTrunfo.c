#include <stdio.h>

int main() {
    
    // Variáveis 
    int escolha; 
    char estado;
    char estado1;
    char codigo[4], codigo1[4];
    char cidade[20], cidade1[20];
    signed long int   populacao, populacao1;
    int locaisturisticos, locaisturisticos1;
    float area, area1, pib1, pib2, dpopulcao1, dpopulcao2, pibc1, pibc2;
  
    //  Carta número 1
    printf("Carta 01 !\n\n");
    
    printf("Digite a letra do seu estado:");
    scanf(" %c", &estado);  

    printf("Digite o código da sua carta:");
    scanf("%s", &codigo);

    printf("Digite a cidade do seu estado: ");
    scanf("%s", &cidade);

    printf("Digite a população da sua cidade:");
    scanf("%ld", &populacao);

    printf("Digite quantos locais turísticos tem sua cidade:");
    scanf("%d", &locaisturisticos);

    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib1);

    printf("Digite a área da sua cidade:");
    scanf("%f", &area);


    //  Carta número 2
    printf("\nCarta 02 !\n\n");

    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado1);  

    printf("Digite o código da sua carta: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade do seu estado: ");
    scanf("%s", &cidade1);

    printf("Digite a população da sua cidade: ");
    scanf("%ld", &populacao1);

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

    printf("\nEscolha qual atributo comparar:\n\n");
    printf("1. população\n");
    printf("2. Área\n");
    printf("3. PIB\n"); 
    printf("4. Locais turísticos\n");   
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: // População
            if (populacao > populacao1) {
                printf("Carta número 1 venceu!\n");
                printf("Atributo: população\n");
                printf("Cidade: %s\n", cidade);
                printf("População: %ld habitantes\n", populacao);
            } else if (populacao1 > populacao) {
                printf("Carta número 2 venceu!\n");
                printf("Atributo: população\n");
                printf("Cidade: %s\n", cidade1);
                printf("População: %ld habitantes\n", populacao1);
            } else {
                printf("Empate de população!\n");
            }
            break;

        case 2: // Área
            if (area > area1) {
                printf("Carta número 1 venceu!\n");
                printf("Atributo: área\n");
                printf("Cidade: %s\n", cidade);
                printf("Área: %.2f km²\n", area);
            } else if (area1 > area) {
                printf("Carta número 2 venceu!\n");
                printf("Atributo: área\n");
                printf("Cidade: %s\n", cidade1);
                printf("Área: %.2f km²\n", area1);
            } else {
                printf("Empate de área!\n");
            }
            break;

        case 3: // PIB
            if (pib1 > pib2) {
                printf("Carta número 1 venceu!\n");
                printf("Atributo: PIB\n");
                printf("Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib1);
            } else if (pib2 > pib1) {
                printf("Carta número 2 venceu!\n");
                printf("Atributo: PIB\n");
                printf("Cidade: %s\n", cidade1);
                printf("PIB: %.2f\n", pib2);
            } else {
                printf("Empate de PIB!\n");
            }
            break;

        case 4: // Locais turísticos
            if (locaisturisticos > locaisturisticos1) {
                printf("Carta número 1 venceu!\n");
                printf("Atributo: locais turísticos\n");
                printf("Cidade: %s\n", cidade);
                printf("Locais turísticos: %d\n", locaisturisticos);
            } else if (locaisturisticos1 > locaisturisticos) {
                printf("Carta número 2 venceu!\n");
                printf("Atributo: locais turísticos\n");
                printf("Cidade: %s\n", cidade1);
                printf("Locais turísticos: %d\n", locaisturisticos1);
            } else {
                printf("Empate em locais turísticos!\n");
            }
            break;

        case 5: // Densidade demográfica
            if (dpopulcao1 < dpopulcao2) {
                printf("Carta número 1 venceu!\n");
                printf("Atributo: Densidade demográfica\n");
                printf("Cidade: %s\n", cidade);
                printf("Densidade demográfica: %.2f hab/km²\n", dpopulcao1);
            } else if (dpopulcao2 < dpopulcao1) {
                printf("Carta número 2 venceu!\n");
                printf("Atributo: Densidade demográfica\n");
                printf("Cidade: %s\n", cidade1);
                printf("Densidade demográfica: %.2f hab/km²\n", dpopulcao2);
            } else {
                printf("Empate em densidade demográfica!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
            
}