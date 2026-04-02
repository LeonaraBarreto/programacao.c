//Super Trunfo - Cadastro de Carta.
//Disciplina: Programação em Linguagem C.
//Dados da Carta 1:

#include <stdio.h>

int main (){
    //Carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1; 
    float area1; 
    float PIB1; 
    int pontos1; 

    //Carta 2 
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2; 
    float area2; 
    float PIB2; 
    int pontos2; 

    printf("Digite a inicial do estado:\n"); //Especifiquei que é apenas a inicial, para facilitar o cadastro
    scanf(" %c", &estado1);
    printf("Estado: %c\n", estado1);

    printf("Digite o código da carta (número):\n"); //Especifiquei que é o número pra ficar compreensível; visto que no final vai sair o código + inicial.
    scanf("%s", &codigo1);
    printf("Código da carta: %s\n", codigo1);

    printf("Digite a cidade:\n"); 
    scanf("%s", &cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite a população da cidade (Apenas números):\n"); //Nos dados que são apenas números eu coloquei entre parênteses para não haver confusão na leitura do código ao rodar o programa
    scanf("%d", &populacao1);
    printf("População da cidade: %d\n", populacao1);

    printf("Digite a área em Km² (Apenas números):\n");
    scanf("%f", &area1);
    printf("Área: %.0f km²\n", area1);

    printf("Digite o PIB da cidade (Apenas números):\n");
    scanf("%f", &PIB1);
    printf("PIB - Produto Interno Bruto: %.2f bilhões de reais\n", PIB1);
    
    printf("Digite o número de pontos turísticos (Apenas números):\n");
    scanf("%d", &pontos1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("Digite a inicial do estado:\n"); 
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Digite o código da carta (número):\n"); 
    scanf("%s", &codigo2);
    printf("Código da carta: %s\n", codigo2);

    printf("Digite a cidade:\n"); 
    scanf("%s", &cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Digite a população da cidade (Apenas números):\n");
    scanf("%d", &populacao2);
    printf("População da cidade: %d\n", populacao2);

    printf("Digite a área em Km² (Apenas números):\n");
    scanf("%f", &area2);
    printf("Área: %.0f km²\n", area2);

    printf("Digite o PIB da cidade (Apenas números):\n");
    scanf("%f", &PIB2);
    printf("PIB - Produto Interno Bruto: %.2f bilhões de reais\n", PIB2);
    
    printf("Digite o número de pontos turísticos (Apenas números):\n");
    scanf("%d", &pontos2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População da cidade: %d\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;

}