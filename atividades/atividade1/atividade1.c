#include <stdio.h>
#include <stdlib.h>

int main()
{
        int hora = 0;
        printf("Que horas sao?\n");
        scanf("%d", &hora);

        if (hora >= 0 && hora < 12)
        {
                printf("Bom dia\n");
        }
        else if (hora >= 12 && hora < 18)
        {
                printf("Boa tarde\n");
        }
        else if (hora >= 18 && hora <= 23)
        {
                printf("Boa noite\n");
        }
        else
        {
                printf("Horario invalido\n");
        }

        system("pause"); // para não fechar o executavel

        return 0;
}
