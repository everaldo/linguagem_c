//Simplificando a leitura das variáveis - usar 1 scanf ao invés de 3
//os dados de idade, peso e altura vão ser lidos separados por 1 espaço



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
    int i, j, idade, menores18, acima80kgs;
    float peso, altura, idade_media, altura_media, porcentagem_acima80kgs;

    i = j = idade = menores18 = acima80kgs = 0;
    peso = altura = idade_media = altura_media = 0.0;

    for(i = 0; i < NUM_TIMES; i++){
        idade_media = 0.0;
        for(j = 0; j < NUM_JOGADORES; j++){
            printf("Digite a idade, o peso e a altura do jogador %d do time %d\n", j + 1, i + 1);
            scanf("%d %f %f", &idade, &peso, &altura);
            idade_media += idade;
            altura_media += altura;
            if (idade < 18)
                menores18++;
            if (peso >= 80.0){
                acima80kgs++;
            }
        }
        idade_media = idade_media / NUM_JOGADORES ;
        printf("A média das idades do time %d é %f\n", i + 1, idade_media);
    }
    altura_media = altura_media / (NUM_JOGADORES * NUM_TIMES);
    printf("A média das alturas é %f\n", altura_media);

    porcentagem_acima80kgs = 100.0 * acima80kgs / (NUM_JOGADORES * NUM_TIMES);

    printf("O número de jogadores com menos de 18 anos é %d.\n", menores18);
    printf("A porcentagem de jogadores com mais de 80kgs é %f.\n", porcentagem_acima80kgs);
    return 0;
}










