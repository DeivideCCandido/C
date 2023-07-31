#include <stdio.h>

int main()
{
    int N, i, cont;
    double soma, media, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    int idade[N];
    char nome[N][50];
    double altura[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + altura[i];
    }
    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);

    cont = 0;
    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cont = cont + 1;
        }
    }
    porcentagem = (double)cont * 100 / N;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }
    return 0;
}
