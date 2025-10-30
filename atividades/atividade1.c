#include <stdio.h>
#include <stdlib.h>

/*
        Entrada:

        Declarar uma variável Int
        Receber o valor do teclado da hora

        Saída:

        Imprimir seu nome de aluno na execução.
        Se o valor for maior ou igual a 0 e menor do q 12, escrever "Bom dia"
        Se o valor for maior ou igual a 12 e menor do q 18, escrever "Boa tarde"
        Se o valor for maior ou igual a 18 e menor ou igual a 23, escrever "Boa noite"
        Se o valor não atender a nenhuma das condições acima, escrever "Horário inválido"
*/

int main() {

        int hora = 0;
        printf("Que horas sao?\n");
        scanf("%d", &hora);

        if(hora >= 0 && hora < 12)
        {
                printf("Bom dia\n");
        }
        
        if(hora >= 12 && hora < 18)
        {
                printf("Boa tarde\n");
        }
        
        if(hora >= 18 && hora <= 23)
        {
                printf("Boa noite\n");
        }

        if(hora > 23 || hora < 0)
        {
                printf("Horario invalido\n");
        }

        system("pause"); // para não fechar o executavel

        return 0;
}
