
#include <iostream>

int main() 
{

    int num1, resultado, menu, contador = 0;

    printf("Ola Seja Bem Vindo a Tabuada Eletronica\n");

    do
    {
        printf("Digite o numero a qual voce deseja ver a tabuada: ");
        scanf("%d", &num1);
    
        do
        {
            resultado = num1 * contador;

            printf("\n%d ", num1);
            printf("x %d", contador);
            printf(" = %d", resultado);
            contador++;

        } while (contador <= 10);

        do
        {
            contador = 0;
            printf("\nDigite 1 para FINALIZAR ou 2 para escolher OUTRO NUMERO: ");      
            scanf("%d", &menu);

            if (menu==1)
            {
            printf("\nFinalizando....");
            }
            

        } while (menu != 1 and menu != 2);

    } while (menu==2);



    


}