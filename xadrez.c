#include <stdio.h>
#include <stdbool.h>

int main()
{

    const int bispo = 5;
    const int torre = 5;
    const int rainha = 8;
    const int cavalo = 2;
    char entrada;
    bool aux = false;

    printf("Xadrez\n");

    printf("\nDigite a peça que deseja movimentar (ou e para sair.)\n");
    printf("b - bispo\n");
    printf("t - torre\n");
    printf("r - rainha\n");
    printf("c - cavalo\n");
    do
    {
        scanf("%c", &entrada);
        switch (entrada)
        {
        case 'b':
            for (int i = 0; i < bispo; i++)
            {
                printf("Cima.\n");
                printf("Direita.\n");
            }
            printf("\nDigite a peça que deseja movimentar (ou 'e' para sair.)\n");
            printf("b - bispo\n");
            printf("t - torre\n");
            printf("r - rainha\n");
            printf("c - cavalo");
            break;
        case 't':
            for (int i = 0; i < torre; i++)
            {
                printf("Direita.\n");
            }
            printf("\nDigite a peça que deseja movimentar (ou 'e' para sair.)\n");
            printf("b - bispo\n");
            printf("t - torre\n");
            printf("r - rainha\n");
            printf("c - cavalo");
            break;
        case 'r':
            for (int i = 0; i < rainha; i++)
            {
                printf("Esquerda.\n");
            }
            printf("\nDigite a peça que deseja movimentar (ou 'e' para sair.)\n");
            printf("b - bispo\n");
            printf("t - torre\n");
            printf("r - rainha\n");
            printf("c - cavalo\n");
            break;
        case 'c':
            for (int y = 0; y < cavalo; y++)
            {
                printf("Baixo.\n");
            }
            printf("Direita.\n");
            printf("\nDigite a peça que deseja movimentar (ou 'e' para sair.)\n");
            printf("b - bispo\n");
            printf("t - torre\n");
            printf("r - rainha\n");
            printf("c - cavalo\n");
            break;
        case 'e':
            aux = true;
            break;
        }
    } while (aux != true);

    return 0;
}
