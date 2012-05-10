/*
Exercício feito em sala de aula.
Confira novas versões para melhorias e considerações

*/

#include <stdio.h>
#include <stdlib.h>


/*
Em um campeonato de futebol existem 5 times,
cada time possui 11 jogadores. Faça um algoritmo que
recebe a idade, o peso e a altura de cada um dos jogadores. Calcule e mostre:

a) A quantidade de jogadores com idade inferior a 18;
b) A média das idades dos jogadores de cada time;
c) A média das alturas de todos os jogadores do campeonato
d) A porcentagem de jogadores com mais de 80kg do campeonato



*/


#define NUM_TIMES 2
#define NUM_JOGADORES 3

int main()
{
    int idade; //idade do jogador
    float peso;
    float altura;
    int qtd_menor18 = 0;
    float media_idades, media_alturas;
    float porcentagem_acima80kgs;
    int i, j;
    int qtd_acima80kgs = 0;

    for(i = 0; i < NUM_TIMES; i++){
        media_idades = 0.0;
        for(j = 0; j < NUM_JOGADORES; j++){
            printf("Digite a idade do jogador %d do time %d\n", j + 1, i + 1);
            scanf("%d", &idade);
            media_idades += idade;
            printf("Digite o peso do jogador %d do time %d\n", j + 1, i + 1);
            scanf("%f", &peso);
            printf("Digite a altura do jogador %d do time %d\n", j + 1, i + 1);
            scanf("%f", &altura);
            media_alturas += altura;
            if (idade < 18)
                qtd_menor18++;
            if (peso >= 80.0){
                qtd_acima80kgs++;
            }
        }
        media_idades = media_idades / NUM_JOGADORES ;
        printf("A média das idades é %f\n", media_idades);
    }
    media_alturas = media_alturas / (NUM_JOGADORES * NUM_TIMES);
    printf("A média das alturas é %f\n", media_alturas);

    porcentagem_acima80kgs = 100.0 * qtd_acima80kgs / (NUM_JOGADORES * NUM_TIMES);

    printf("O número de jogadores com menos de 18 anos é %d.\n", qtd_menor18);
    printf("A porcentagem de jogadores com mais de 80kgs é %f.\n", porcentagem_acima80kgs);
    return 0;
}










