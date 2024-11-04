/******************************************************************************

a) Receber vários números do teclado e informar se ele é divisível por 10, por 5, por 2 ou senão é
divisível por nenhum deles.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Entre com um número qualquer:\n");
    scanf("%d", &num);
    
    while(num != 0 || num < 0){
        if(num % 10 == 0){
            printf("O número %d é divisível por 10!\n", num);
        }
        if(num % 5 == 0){
            printf("O número %d é divisível por 5!\n", num);
        }
        if(num % 2 == 0){
            printf("O número %d é divisível por 2!\n", num);
        }
        else{
            printf("O número %d não é divisível por 10, 5 ou 2!", num);
        }
        printf("\nEntre com um número qualquer:\n");
        scanf("%d", &num);
    }

    return 0;
}
