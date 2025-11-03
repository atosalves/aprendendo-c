#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nomes[] = {
        "Fernanda",
        "Juliana",
        "Paulo",
        "Bruna",
        "Larissa",
        "Bruno",
        "Joao",
        "Tatiana",
        "Antonio",
        "Marcelo",
        "Patricia",
        "Luciana",
    };

    int tamanho = 12;
    int i = 0;
    int j = 0;
    char ultimaLetra = 'a';

    for (; i < tamanho; i++)
    {
        for (; nomes[i][j] != '\0'; j++)
        {
            ultimaLetra = nomes[i][j];
        }

        if (ultimaLetra == 'a')
        {
            printf("%s: feminino\n", nomes[i]);
        }
        else
        {
            printf("%s: masculino\n", nomes[i]);
        }
    }

    system("pause"); // para não fechar o executavel

    return 0;
}
