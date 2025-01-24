#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



    // Declarar as variáveis: inteiros (int), pontos flutuantes (float e double) e caracteres(char); 

    // Usar nomes significativos; 

    /* 
    Tipos de dados inteiros: (Int) números inteiros; 
    Tipos de dados de pontos fluantes: (float) números decimais menores e ocupa pouco espaço na memória;
    Tipos de dados de pontos fluantes: (double) números decimais maiores e ocupa maior espaço na memória;
    Tipos de dados de caracteres: (char) define uma letra('A') ou um conjunto de letras("Agua"); 
    */

    // Variáveis para armazenar os dados das cartas;

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float PIB; 
    int pontos_turisticos;

    //Inicialização das variáveis inseridas;

    estado[50] = "Brasil";
    codigo[5] = "A01";
    cidade[50] = "SaoPaulo";
    populacao = 12325000;
    area = 1521.11;
    PIB = 699.28;
    pontos_turisticos = 50;

    /* 
    Utiliza-se o valor de saída de dados (printf) para exibir informções na tela.
    Utiliza-se o valor de entrada de dados (scanf) para ler dados de entrada do usuário.
    Utiliza-se o valor (\n) para espaçar e organizar as informações na linha seguinte.
    Para exibir (printf) ou ler (scanf) os tipos de variáveis: 
    Utiliza-se "%d" para (int) inteiro decimal;
    Utiliza-se "%i" para (int) inteiro decimal;
    Utiliza-se "%f" para (flout ou double) padrão decimal;
    Utiliza-se "%e" para (flout ou double) notação científica;
    Utiliza-se "%c" para (char) uma letra;
    Utiliza-se "%s" para (char) várias letras;
    Utiliza-se & antes do nome da variável para entrar com os dados no scanf;
    */

    //Exemplo de entrada de uma carta;

    printf("Qual o estado?\n");
    scanf("%s", &estado);

    printf("Qual o codigo?\n");
    scanf("%s", &codigo);

    printf("Qual a cidade?\n");
    scanf("%s", &cidade);

    printf("Qual o número da população?\n");
    scanf("%d", &populacao);

    printf("Qual a área em km²?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &pontos_turisticos);

    //Para exibir na tela as informações dos dados das cartas de entrada do usuário; 

    printf("Estado: %s\n", estado);

    printf("Codigo: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Área em km²: %f\n", area);

    printf("PIB: %f\n", PIB);

    printf("Pontos turísticos: %d\n", pontos_turisticos);

    

    return 0;

}
