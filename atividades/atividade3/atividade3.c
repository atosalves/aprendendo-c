#include <stdio.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#else
#include <unistd.h>
#endif

int main()
{
        printf("Autor: Atos Alves\n");
        printf("Email: atosalvesqueiroz@gmail.com\n");
        printf("Data do programa: 1/11/2024\n");

        time_t mytime;
        mytime = time(NULL);
        struct tm tm = *localtime(&mytime);
        printf("Data atual: %d/%d/%d/\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

        char opcao[10];

        while (1)
        {
                printf("\n--- MENU DE OPCOES ---\n");
                printf("1. Nome e idade\n");
                printf("2. Operacoes matematicas com dois numeros\n");
                printf("3. Fahrenheit para Celsius\n");
                printf("4. Fatorial de um numero\n");
                printf("5. Vetor de strings numericas e media\n");
                printf("6. Tabuada (1 a 10, exceto 5)\n");
                printf("7. Matriz double 5x3 e medias\n");
                printf("8. Numeros de 100 a 1\n");
                printf("9. Contar e substituir caracteres 'a' por 'b'\n");
                printf("10. Codigo ASCII de um caractere\n");
                printf("exit - Sair do programa\n");
                printf("---------------------\n");
                printf("Escolha uma opcao: ");
                scanf("%s", opcao);

                if (strcmp(opcao, "exit") == 0)
                        break;

                switch (atoi(opcao))
                {

                case 1:
                {
                        char nome[50];
                        char sobrenome[50];
                        int ano;
                        int idade;
                        int tamanho = 0;

                        printf("Digite seu primeiro nome: ");
                        scanf("%s", nome);
                        printf("Digite seu sobrenome: ");
                        scanf("%s", sobrenome);
                        printf("Digite o ano que voce nasceu: ");
                        scanf("%d", &ano);

                        idade = 2025 - ano;

                        for (int i = 0; nome[i] != '\0'; i++)
                        {
                                tamanho++;
                        }
                        for (int i = 0; sobrenome[i] != '\0'; i++)
                        {
                                tamanho++;
                        }

                        printf("Nome completo: %s %s\n", nome, sobrenome);
                        printf("Idade: %d\n", idade);
                        printf("Idade + quantidade de letras: %d\n", idade + tamanho);
                        break;
                }

                case 2:
                {
                        float n1, n2;

                        printf("Digite o primeiro numero: ");
                        scanf("%f", &n1);
                        printf("Digite o segundo numero: ");
                        scanf("%f", &n2);

                        float soma = n1 + n2;
                        float produto_quadrado = n1 * (n2 * n2);
                        float quadrado_n1 = n1 * n1;
                        float soma_quadrados = (n1 * n1) + (n2 * n2);

                        float raiz_soma_quadrados = 0;
                        for (float x = 0; x * x <= soma_quadrados; x += 0.0001f)
                        {
                                raiz_soma_quadrados = x;
                        }

                        float diferenca = n1 - n2;
                        float seno_aprox = diferenca;

                        float modulo;
                        if (n1 < 0)
                                modulo = -n1;
                        else
                                modulo = n1;

                        printf("Soma: %.2f\n", soma);
                        printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", produto_quadrado);
                        printf("Quadrado do primeiro numero: %.2f\n", quadrado_n1);
                        printf("Raiz quadrada da soma dos quadrados: %.2f\n", raiz_soma_quadrados);
                        printf("Seno da diferenca: %.2f\n", seno_aprox);
                        printf("Modulo do primeiro numero: %.2f\n", modulo);
                        break;
                }

                case 3:
                {
                        float f, c;

                        printf("Digite a temperatura em Fahrenheit: ");
                        scanf("%f", &f);

                        c = (f - 32) * 5 / 9;

                        printf("Temperatura em Celsius: %.2f\n", c);
                        break;
                }

                case 4:
                {
                        int n;
                        int fat = 1;

                        printf("Digite um numero: ");
                        scanf("%d", &n);

                        if (n < 0)
                        {
                                printf("Nao existe fatorial de numero negativo!\n");
                                break;
                        }

                        for (int i = 1; i <= n; i++)
                        {
                                fat *= i;
                        }

                        printf("Fatorial de %d = %d\n", n, fat);
                        break;
                }

                case 5:
                {
                        char numeros[10][10];
                        int soma = 0;

                        printf("Digite 10 numeros:\n");
                        for (int i = 0; i < 10; i++)
                        {
                                scanf("%s", numeros[i]);

                                int valor = 0;
                                for (int j = 0; numeros[i][j] != '\0'; j++)
                                {
                                        if (numeros[i][j] >= '0' && numeros[i][j] <= '9')
                                        {
                                                valor = valor * 10 + (numeros[i][j] - '0');
                                        }
                                }
                                soma += valor;
                        }

                        printf("Valores digitados:\n");
                        for (int i = 0; i < 10; i++)
                        {
                                printf("%s ", numeros[i]);
                        }

                        printf("\nMedia = %.2f\n", soma / 10.0);
                        break;
                }

                case 6:
                {
                        int tabuada[10][10];
                        for (int i = 1; i <= 10; i++)
                        {
                                if (i == 5)
                                {
                                        continue;
                                }
                                printf("\nTabuada do %d:\n", i);
                                for (int j = 1; j <= 10; j++)
                                {
                                        tabuada[i - 1][j - 1] = i * j;
                                        printf("%d x %d = %d\n", i, j, tabuada[i - 1][j - 1]);
                                }
                        }
                        break;
                }

                case 7:
                {
                        double matriz[5][3];
                        double somaColPares = 0;
                        double somaLinImpares = 0;
                        int contColPares = 0;
                        int contLinImpares = 0;

                        printf("Digite valores para uma matriz 5x3:\n");
                        for (int i = 0; i < 5; i++)
                        {
                                for (int j = 0; j < 3; j++)
                                {
                                        printf("[%d][%d]: ", i, j);
                                        scanf("%lf", &matriz[i][j]);
                                        if (j % 2 == 0)
                                        {
                                                somaColPares += matriz[i][j];
                                                contColPares++;
                                        }
                                        if (i % 2 != 0)
                                        {
                                                somaLinImpares += matriz[i][j];
                                                contLinImpares++;
                                        }
                                }
                        }

                        double mediaColPares = somaColPares / contColPares;
                        double mediaLinImpares = somaLinImpares / contLinImpares;

                        printf("Diferenca entre medias: %.2lf\n", mediaColPares - mediaLinImpares);
                        break;
                }

                case 8:
                {
                        for (int i = 100; i >= 1; i--)
                        {
                                printf("%d ", i);
                        }
                        printf("\n");
                        break;
                }

                case 9:
                {
                        char str[100];
                        int cont = 0;

                        printf("Digite uma string: ");
                        scanf(" %[^\n]", str);

                        for (int i = 0; str[i] != '\0'; i++)
                        {
                                if (str[i] == 'a')
                                {
                                        str[i] = 'b';
                                        cont++;
                                }
                        }

                        printf("Caracteres modificados: %d\n", cont);
                        printf("String modificada: %s\n", str);
                        break;
                }

                case 10:
                {
                        char c;
                        printf("Digite um caractere: ");
                        scanf(" %c", &c);
                        printf("Caractere: %c | Codigo ASCII: %d\n", c, c);
                        break;
                }

                default:
                        printf("Opcao invalida!\n");
                }
        }

        printf("\nSaindo do programa...\n");
        int i = 10;
        while (i >= 0)
        {
                printf("%d...\n", i);
                sleep(1);
                i--;
        }
        printf("FIM!\n");

        return 0;
}
