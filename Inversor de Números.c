#include <stdio.h>


int main (){
    int n1, n2, inverso;
    char resposta;

    printf("========= INVERSOR DE NUMEROS INTEIROS ========= \n");
    printf("Quer inverter um numero(s/n)? ");
    scanf("%c", &resposta);

    if (resposta=='s'){
        while (resposta=='s'){
            printf("Digite um numero: ");
            scanf ("%i", &n1);

            if (n1>=0){
                printf("o inverso de %i e ", n1);
                do {
                    inverso=n1%10;
                    printf("%i", inverso);
                    n1=n1/10;
                } while (n1!=0);
            }
            else {
                if (n1<0){
                    n2=n1;
                    n1=n1*-1;
                    printf("O inverso de %i e ", n2);
                    printf("-");
                    do {
                        inverso=n1%10;
                        printf("%i", inverso);
                        n1=n1/10;
                } while (n1!=0);
                }
            }
            printf("\n");
            printf("Quer repetir (s/n)?");
            scanf(" %c", &resposta); /*o espaço antes do %c serve para limpar o buffer!!!*/
        }
}

    return 0;
}
