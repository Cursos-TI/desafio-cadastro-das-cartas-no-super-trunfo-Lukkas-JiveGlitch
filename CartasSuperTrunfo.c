#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa (?)
// Por algum motivo desde que criei o repositório têm este comentário acima, não compreendi muito bem ^
// Criei o Código no APP Desktop do VSCode e só estou dando Update no repositório.


int main() {
                                            //Variáveis para a Carta Número Um
    char cidade0[50];
    char estado0[3];
    float pib0, area0;
    int pop0, ptturis0;
        
                                            //Variáveis para a Carta Número Dois
    char cidade1[50];
    char estado1[3];
    float pib1, area1;
    int pop1, ptturis1;
    



                                            //Input de Dados do Usuário para a carta número 1
    printf("\n Primeira Carta: \n");
    printf("Digite o Nome de Sua Cidade: \n");
    scanf("%s", &cidade0);

    printf("Digite a Sigla de Seu Estado: \n");
    scanf("%s", &estado0);

    printf("Qual a Área de Sua Cidade? \n");
    scanf("%f", &area0);

    printf("Digite o PIB de Sua Cidade (Produto Interno Bruto): \n");
    scanf("%f", &pib0);

    printf("Digite a População de Sua Cidade: \n");
    scanf("%d", &pop0);

    printf("Quantos Pontos Turísticos sua Cidade tem? \n");
    scanf("%d", &ptturis0);
    
    
                                                //Input de Dados do Usuário para a carta número 2

    printf("\n Segunda Carta: \n");
    printf("Digite o Nome de Sua Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a Sigla de Seu Estado: \n");
    scanf("%s", &estado1);

    printf("Qual a Área de Sua Cidade? \n");
    scanf("%f", &area1);

    printf("Digite o PIB de Sua Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a População de Sua Cidade: \n"); 
    scanf("%d", &pop1);

    printf("Quantos Pontos Turísticos sua Cidade tem? \n");
    scanf("%d", &ptturis1);



                                            //Exibição dos Dados inputados
                                            
    printf("\n Primeira Carta: \n");
    printf("Nome da Cidade: %s\n", cidade0);
    printf("Estado: %s\n", estado0);
    printf("Área: %.2f\n", area0);
    printf("PIB: R$ %.2f Bi\n", pib0);
    printf("População: %d Habitantes\n", pop0);
    printf("N° de Pontos Turísticos: %d\n", ptturis0);

    printf("\n Segunda Carta: \n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: R$ %.2f Bi\n", pib1);
    printf("População: %d Habitantes\n", pop1);
    printf("N° de Pontos Turísticos: %d\n", ptturis1);


                                            

    return 0;
}
