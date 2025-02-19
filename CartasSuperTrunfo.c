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

    //Inicialização das variáveis inseridas;

    printf("========= JOGO DE CARTAS SUPER TRUNFO =========\n"); //Banner do jogo super trunfo

    /*
    Modificadores de tipos de dados: 
    Unsigned int ou char; trabalha somente com valores positivos incluindo o zero
    Long, long long int ou double, long double para extensão do valor de armazenamento de um número
    Short int; para valores menores que 32767
    */

    char estado_1[50] = "Brasil";
    char codigo_1[5] = "A01";
    char cidade_1[50] = "Brasilia";
    int populacao_1 = 2817381;
    float area_1 = 5760.78;
    float PIB_1 = 265847334.00;
    int pontos_turisticos_1 = 32;
    float densidade_populacional_1 = populacao_1 / area_1; //A densidade populacional será calculada automaticamente pelo quociente entre a população e a área da cidade
    float PIB_per_Capita_1 = PIB_1 / populacao_1; //O pib per capita será calculado automaticamente pelo quociente entre a população e o PIB da cidade
    float Super_Poder_1 = populacao_1 + area_1 + PIB_1 + pontos_turisticos_1 + densidade_populacional_1 + PIB_per_Capita_1; // O super poder será calculado automaticamente pela soma de todas as propriedades de uma cidade
    
    char estado_2[50] = "Portugal";
    char codigo_2[5] = "E01";
    char cidade_2[50] = "Lisboa";
    int populacao_2 = 567131;
    float area_2 = 100.05;
    float PIB_2 = 522000000.00; 
    int pontos_turisticos_2 = 55;
    float densidade_populacional_2 = populacao_2 / area_2;
    float PIB_per_Capita_2 = PIB_2 / populacao_2;
    float Super_Poder_2 = populacao_2 + area_2 + PIB_2 + pontos_turisticos_2 + densidade_populacional_2 + PIB_per_Capita_2;

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

    //Para variáveis do tipo char de strings (%s), foi removido "&" antes do nome da variável (scanf);

    //Exemplo de entrada de uma carta;

    printf("========= Insira as informações da primeira cidade =========\n");

    printf("Qual o primeiro estado?\n");
    scanf("%s", estado_1);

    printf("Qual o código do primeiro estado?\n");
    scanf("%s", codigo_1);

    printf("Qual o nome da primeira cidade?\n");
    scanf("%s", cidade_1);

    printf("Qual o número da população da primeira cidade?\n");
    scanf("%d", &populacao_1);

    printf("Qual a área em km² da primeira cidade?\n");
    scanf("%f", &area_1);

    printf("Qual o PIB da primeira cidade?\n");
    scanf("%f", &PIB_1);

    printf("Quantos pontos turísticos tem a primeira cidade?\n");
    scanf("%d", &pontos_turisticos_1);

    

    printf("========= Insira as informações da segunda cidade =========\n");

    printf("Qual o segundo estado?\n");
    scanf("%s", estado_2);

    printf("Qual o código do segundo estado?\n");
    scanf("%s", codigo_2);

    printf("Qual o nome da segunda cidade?\n");
    scanf("%s", cidade_2);

    printf("Qual o número da população da segunda cidade?\n");
    scanf("%d", &populacao_2);

    printf("Qual a área em km² da segunda cidade?\n");
    scanf("%f", &area_2);

    printf("Qual o PIB da segunda cidade?\n");
    scanf("%f", &PIB_2);

    printf("Quantos pontos turísticos tem a segunda cidade?\n");
    scanf("%d", &pontos_turisticos_2);

    //Para exibir na tela as informações dos dados das cartas de entrada do usuário;

    //Para exibir apenas duas casas decimais depois da vírgula para variáveis do tipo float, utiliza-se .2 entre %f = %.2f

    printf("========= Exibição das informações da primeira cidade =========\n");

    printf("Nome do primeiro estado: %s\n", estado_1);

    printf("Código do primeiro estado: %s\n", codigo_1);

    printf("Nome da primeira cidade: %s\n", cidade_1);

    printf("O número da população da primeira cidade é: %d habitantes \n", populacao_1);

    printf("A área da primeira cidade é: %.2f km² \n", area_1);

    printf("O PIB da primeira cidade é: %.2f milhões de reais\n", PIB_1);

    printf("O número de Pontos turísticos da primeira cidade é: %d\n", pontos_turisticos_1);

    printf("A densidade populacional da primeira cidade é: %.2f habitantes/km² \n", densidade_populacional_1);

    printf("O PIB per Capita da primeira cidade é: %.2f reais\n", PIB_per_Capita_1);

    printf("O Super Poder da primeira cidade é: %.2f\n", Super_Poder_1);



    printf("========= Exibição das informações da segunda cidade =========\n");

    printf("Nome do segundo estado: %s\n", estado_2);

    printf("Código do segundo estado: %s\n", codigo_2);

    printf("Nome da segunda cidade: %s\n", cidade_2);

    printf("O número da população da segunda cidade é: %d habitantes \n", populacao_2);

    printf("A área da segunda cidade é: %.2f km² \n", area_2);

    printf("O PIB da segunda cidade é: %.2f bilhões de reais\n", PIB_2);

    printf("O número de Pontos turísticos da segunda cidade é: %d\n", pontos_turisticos_2);

    printf("A densidade populacional da segunda cidade é: %.2f habitantes/km² \n", densidade_populacional_2);

    printf("O PIB per Capita da segunda cidade é: %.2f reais\n", PIB_per_Capita_2);

    printf("O Super Poder da segunda cidade é: %.2f\n", Super_Poder_2);



    printf("========= Comparação simples das propriedades de duas cidades =========\n");

    /*
    Operadores Relacionais: 
    Para fazer comparações entre valores das variáveis;
    Determinar se um valor é verdadeiro = 1 ou falso = 0 de acordo com o tipo de operador relacional
    a >= b, a <= b, a == b, a != b;
    
    Se uma propriedade da cidade 1 for maior que a cidade 2, resultado = 1

    Se uma propriedade da cidade 1 for menor que a cidade 2, resultado = 0

    A cidade com a menor densidade populacional vence 

    A primeira cidade vence se obtiver mais resultados de comparações igual a 1;

    A segunda cidade vence se obtiver mais resultados de comparações igual a 0;
    */

    printf("Comparação das populações: %d\n", populacao_1 >= populacao_2);

    printf("Comparação das áreas: %d\n", area_1 >= area_2);

    printf("Comparação do PIB: %d\n", PIB_1 >= PIB_2);

    printf("Comparação do número de pontos turísticos: %d\n", pontos_turisticos_1 >= pontos_turisticos_2);
    
    printf("Comparação das densidade populacionais: %d\n", densidade_populacional_1 <= densidade_populacional_2); //A cidade que obtiver menor valor de densidade populacional vence nesta comparação (<=)
    
    printf("Comparação do PIB per Capita: %d\n", PIB_per_Capita_1 >= PIB_per_Capita_2);
    
    printf("Comparação dos Super poderes: %d\n", Super_Poder_1 >= Super_Poder_2);

    //Exibição do resultado da comparação simples;

    printf("A cidade vencedora é %s\n", cidade_2);
    

    return 0;

}
