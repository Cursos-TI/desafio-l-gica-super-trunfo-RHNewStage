#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    //JOGO SUPER TRUNFO MESTRE
    printf("Inicializando o jogo Super Trunfo...\n");
    printf("Bem-vindo ao jogo Super Trunfo CAPITAIS!\n");
    printf("Menu Principal:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção de 1 a 3:\n");
    scanf("%d", &opcao);
   
    switch (opcao) {
        case 1: {
            printf("Iniciando o jogo...\n");

//***Variáveis para as cartas***
//aqui é a carta 18
//O nome da variável não deve ter acento!
//Paraná é 18 Santa Catarina é 23
    char Estado_18[20]; //Parana
    char Codigo_18[20]; //P03
    char Nome_da_Cidade_18[20]; //Curitiba
    int Populacao_18; //1773718
    float Area_18; //em km^2 435.04
    float Pib_18; //98.00 bilhôes
    int Pontos_Turisticos_18; //39

//aqui é a carta 23
// Santa Catarina é a carta 23
    char Estado_23[20]; // SantaCatarina
    char Codigo_23[20]; // S01
    char Nome_da_Cidade_23[20]; // Florianopolis
    int Populacao_23; //537211
    float Area_23; //em km^2 675.41
    float Pib_23; //23.55
    int Pontos_Turisticos_23; //73


//***Variáveis derivadas e de jogo***
    float DensPopulacional_18; //Densidade populacional da carta
    float PIBpCapita_18; //PIB per capita da carta
    float DensPopulacional_23; //Densidade populacional da carta
    float PIBpCapita_23; //PIB per capita da carta
    int escolhaCartaJogador; //Escolha do jogador entre as cartas
    char primeiroAtributo; //Primeiro atributo escolhido pelo jogador
    char segundoAtributo; //Segundo atributo escolhido pelo jogador
    int vitoriasJogador = 0; //Contador de vitórias do jogador
    int vitoriasComputador = 0; //Contador de vitórias do computador


//***PARTE DE ENTRADA DE DADOS***
    printf ("Carta 18 \n");
    printf ("Digite o Estado: \n");
    scanf ("%s", Estado_18);
    printf ("Digite o Codigo da carta: \n");
    scanf ("%s", Codigo_18);
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", Nome_da_Cidade_18);
    printf ("Digite o número da população da cidade: \n");
    scanf ("%i", &Populacao_18);
    printf ("Digite a Area em Km^2: \n");
    scanf ("%f", &Area_18);
    printf ("Digite o Pib bruto: \n");
    scanf ("%f", &Pib_18);
    printf ("Digite a quantidade de Pontos Turisticos: \n");
    scanf ("%i", &Pontos_Turisticos_18);
    printf("\n"); //quero apenas pular uma linha da digitação final para o inicio da apresentação.


    printf ("Carta 23 \n");
    printf ("Digite o Estado: \n");
    scanf ("%s", Estado_23);
    printf ("Digite o Codigo da carta: \n");
    scanf ("%s", Codigo_23);
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", Nome_da_Cidade_23);
    printf ("Digite o número da população da cidade: \n");
    scanf ("%i", &Populacao_23);
    printf ("Digite a Area em Km^2: \n");
    scanf ("%f", &Area_23);
    printf ("Digite o Pib bruto: \n");
    scanf ("%f", &Pib_23);
    printf ("Digite a quantidade de Pontos Turisticos:\n");
    scanf ("%i", &Pontos_Turisticos_23);
    printf("\n");

        //*****CALCULOS*****
// Abaixo calcula os valores para a Carta 18
// Adicionei a conversão para float para evitar divisao de inteiros (população = int, area = float, assim da conflito)
// Ajustei a escala do PIB para o valor real (PIB estava em bilhões e população nos milhões)
    DensPopulacional_18 = (float)Populacao_18 / Area_18;
    PIBpCapita_18 = (Pib_18 * 1000000000.0) / (float)Populacao_18;
// Abaixo calcula os valores para a Carta 23
// Fiz a mesma coisa aqui
    DensPopulacional_23 = (float)Populacao_23 / Area_23;
    PIBpCapita_23 = (Pib_23 * 1000000000.0) / (float)Populacao_23;

//abaixo quero apresentar os dados recolhidos para carta 18.
    printf ("Nome do Estado: %s \n", Estado_18);
    printf ("Codigo da Carta: %s \n", Codigo_18);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade_18);
    printf ("Quantidade da População: %i \n", Populacao_18);
    printf ("Tamanho da Área em Km^2: %.2f \n", Area_18);
    printf ("PIB Bruto: %.2f Bilhoes \n", Pib_18);
    printf ("Quantidade de Pontos Turisticos: %i \n\n\n", Pontos_Turisticos_18);
    printf("Densidade Populacional da Carta 18: %.2f habitantes/km^2\n", DensPopulacional_18);
    printf("PIB per Capita da Carta 18: R$%.2f/habitantes\n", PIBpCapita_18);
    
    //abaixo quero apresentar os dados recolhidos para a carta 23.
    printf ("Nome do Estado: %s \n", Estado_23);
    printf ("Codigo da Carta: %s \n", Codigo_23);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade_23);
    printf ("Quantidade da População: %i \n", Populacao_23);
    printf ("Tamanho da Área em Km^2: %.2f \n", Area_23);
    printf ("PIB Bruto: %.2f Bilhoes \n", Pib_23);
    printf ("Quantidade de Pontos Turisticos: %i \n\n", Pontos_Turisticos_23);
    printf("Densidade Populacional da Carta 23: %.2f habitantes/km^2\n\n", DensPopulacional_23);
    printf("PIB per Capita da Carta 23: R$%.2f/habitantes\n\n", PIBpCapita_23);
    printf("\n");

// --- Escolha da Carta ---
    printf("--- Escolha de Cartas ---\n");
    printf("Escolha sua carta para essa rodada:\n");
    printf("1 - %s (Cod %s)\n", Estado_18, Codigo_18);
    printf("2 - %s (Cod %s)\n", Estado_23, Codigo_23);
    printf("Digite sua escolha (1 ou 2): ");
    scanf("%d", &escolhaCartaJogador);

    if (escolhaCartaJogador == 1) {
        printf("Você escolheu a carta %s. O computador ficou com a carta %s.\n\n", Estado_18, Estado_23);
    } else if (escolhaCartaJogador == 2) {
        printf("Você escolheu a carta %s. O computador ficou com a carta %s.\n\n", Estado_23, Estado_18);
    } else {
        printf("Escolha de carta inválida, você deve escolher entre 1 ou 2, o jogo será encerrado!\n");
        return 1;
}
    // --- PRIMEIRA RODADA ---
    printf("--- Rodada 1 ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("A. Ataque (Populacao)\n");
    printf("D. Defesa (Pontos Turisticos)\n");
    printf("R. Recuo (PIB per Capita)\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &primeiroAtributo);
    
    switch (primeiroAtributo) {
        case 'A': case 'a':
            printf("\nVocê escolheu Ataque.\n");
            if (escolhaCartaJogador == 1) {
                printf("Seu Ataque: %i vs. Ataque do PC: %i\n", Populacao_18, Populacao_23);
                if (Populacao_18 > Populacao_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Populacao_18 < Populacao_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            } else {
                printf("Seu Ataque: %i vs. Ataque do PC: %i\n", Populacao_23, Populacao_18);
                if (Populacao_23 > Populacao_18) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Populacao_23 < Populacao_18) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            }
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
        break;
        case 'D': case 'd':
            printf("\nVoce escolheu Defesa.\n");
            if (escolhaCartaJogador == 1) {
                printf("Sua Defesa: %i vs. Defesa do PC: %i\n", Pontos_Turisticos_18, Pontos_Turisticos_23);
                if (Pontos_Turisticos_18 > Pontos_Turisticos_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Pontos_Turisticos_18 < Pontos_Turisticos_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            } else {
                printf("Sua Defesa: %i vs. Defesa do PC: %i\n", Pontos_Turisticos_23, Pontos_Turisticos_18);
                if (Pontos_Turisticos_23 > Pontos_Turisticos_18) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Pontos_Turisticos_23 < Pontos_Turisticos_18) {
                            vitoriasComputador++;
                            printf("Vitoria do PC!\n");
                } else {
                            printf("Empate!\n");
                }
            }
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
            break;
        case 'R': case 'r':
            printf("\nVoce escolheu Recuo.\n");
            if (escolhaCartaJogador == 1) {
                printf("Seu Recuo: %.2f vs. Recuo do PC: %.2f\n", PIBpCapita_18, PIBpCapita_23);
                if (PIBpCapita_18 > PIBpCapita_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (PIBpCapita_18 < PIBpCapita_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            }    
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
            break;
        default:
            printf("\nOpcao invalida. Rodada anulada.\n");
    }


// --- SEGUNDA RODADA ---
    char segundoAtributoTemp;
    printf("\n--- Rodada 2 ---\n");
    printf("Escolha o segundo atributo (A, D, R).\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    scanf(" %c", &segundoAtributoTemp);
            
    // Verifica se o atributo é diferente do primeiro
    if (segundoAtributoTemp == primeiroAtributo) {
        printf("\nVocê escolheu o mesmo atributo. O jogo será encerrado.\n");
        return 1;
    }

    switch (segundoAtributoTemp) {
        case 'A': case 'a':
            printf("\nVoce escolheu Ataque.\n");
            if (escolhaCartaJogador == 1) {
                printf("Seu Ataque: %i vs. Ataque do PC: %i\n", Populacao_18, Populacao_23);
                if (Populacao_18 > Populacao_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Populacao_18 < Populacao_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            } else {
                printf("Seu Ataque: %i vs. Ataque do PC: %i\n", Populacao_23, Populacao_18);
                if (Populacao_23 > Populacao_18) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Populacao_23 < Populacao_18) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                     printf("Empate!\n");
                }
            }
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
            break;
        case 'D': case 'd':
            printf("\nVoce escolheu Defesa.\n");
            if (escolhaCartaJogador == 1) {
                printf("Sua Defesa: %i vs. Defesa do PC: %i\n", Pontos_Turisticos_18, Pontos_Turisticos_23);
                if (Pontos_Turisticos_18 > Pontos_Turisticos_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Pontos_Turisticos_18 < Pontos_Turisticos_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            } else {
                printf("Sua Defesa: %i vs. Defesa do PC: %i\n", Pontos_Turisticos_23, Pontos_Turisticos_18);
                if (Pontos_Turisticos_23 > Pontos_Turisticos_18) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (Pontos_Turisticos_23 < Pontos_Turisticos_18) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            }
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
            break;
        case 'R': case 'r':
            printf("\nVoce escolheu Recuo.\n");
            if (escolhaCartaJogador == 1) {
                printf("Seu Recuo: %.2f vs. Recuo do PC: %.2f\n", PIBpCapita_18, PIBpCapita_23);
                if (PIBpCapita_18 > PIBpCapita_23) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (PIBpCapita_18 < PIBpCapita_23) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            } else {
                printf("Seu Recuo: %.2f vs. Recuo do PC: %.2f\n", PIBpCapita_23, PIBpCapita_18);
                if (PIBpCapita_23 > PIBpCapita_18) {
                    vitoriasJogador++;
                    printf("Vitoria do Jogador!\n");
                } else if (PIBpCapita_23 < PIBpCapita_18) {
                    vitoriasComputador++;
                    printf("Vitoria do PC!\n");
                } else {
                    printf("Empate!\n");
                }
            }
            printf("Pontos do Jogador: %d\n", vitoriasJogador);
            printf("Pontos do PC: %d\n\n", vitoriasComputador);
            break;
        default:
            printf("\nOpcao invalida. Rodada anulada.\n");
    }
            
    // --- RESULTADO FINAL ---
    printf("--- Resultado Final ---\n");
    printf("Vitorias do Jogador: %d\n", vitoriasJogador);
    printf("Vitorias do Computador: %d\n", vitoriasComputador);
    if (vitoriasJogador > vitoriasComputador) {
        printf("Parabens, voce venceu o jogo!\n");
    } else if (vitoriasJogador < vitoriasComputador) {
        printf("Infelizmente, voce perdeu o jogo.\n");
    } else {
        printf("O jogo terminou em empate!\n");
    }
    break; // Sai do case 1
}
    case 2:
        printf("Regras do jogo:\n");
        printf("Cada jogador escolhe uma carta e compara um atributo.\n");
        printf("O jogador com o maior valor no atributo escolhido vence a rodada.\n");
        printf("O jogo continua ate que todas as cartas sejam jogadas.\n");
        printf("Voce pode escolher entre diferentes atributos para comparar.\n");
        printf("Esses atributos incluem: Ataque, Defesa e Recuo.\n");
        printf("Ataque e igual o valor de Populacao, Defesa e a Area e Recuo e o PIB.\n");
        printf("Boa sorte!\n");
        break;
    case 3:
        printf("Saindo do jogo. Ate logo!\n");
        return 0;
    default:
        printf("Opcao invalida! Por favor, escolha entre 1 e 3.\n");
        return 1;
}
  
  


return 0;
}
