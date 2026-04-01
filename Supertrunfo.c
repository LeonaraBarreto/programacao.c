//Super Trunfo - Cadastro de Carta.
//Disciplina: Programação em Linguagem C.
//Dados da Carta 1:

#include <stdio.h>

int main (){
    char estado;
    char codigo [3];
    char cidade [50];
    int populacao; 
    float area; 
    float PIB; 
    int pontos; 

    printf("Digite a inicial do estado:\n"); //Especifiquei que é apenas a inicial, para facilitar o cadastro
    scanf("%c", &estado);
    printf("Estado: %c\n", estado);

    printf("Digite o código da carta (Inicial + número):\n"); //Especifiquei que é a inicial + o número pra ficar compreensível.
    scanf("%s", &codigo);
    printf("Código da carta: %s\n", codigo);

    printf("Digite a cidade:\n"); 
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a população da cidade (Apenas números):\n"); //Nos dados que são apenas números eu coloquei entre parênteses para não haver confusão na leitura do código ao rodar o programa
    scanf("%d", &populacao);
    printf("População da cidade: %d\n", populacao);

    printf("Digite a área em Km² (Apenas números):\n");
    scanf("%f", &area);
    printf("Área: %.0f\n", area);

    printf("Digite o PIB da cidade (Apenas números):\n");
    scanf("%f", &PIB);
    printf("PIB - Produto Interno Bruto: %.0f\n", PIB);
    
    printf("Digite o número de pontos turísticos (Apenas números):\n");
    scanf("%d", &pontos);
    printf("Número de pontos turísticos: %d\n", pontos);

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área: %.0f\n", area);
    printf("PIB: %.0f\n", PIB);
    printf("Pontos turísticos: %d\n", pontos);

    return 0;

}