#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese_BRAZIL");
    int n1, cont, fatorado=1;

    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    for (cont=n1; cont>=1;cont--){
        fatorado=fatorado*cont;
        printf("%i", cont);
        if (cont!=1){
            printf("*");
        }
        else if(cont=1){
            printf("= %i", fatorado);
        }
    }
    printf("\n");
    printf("O fatorial de %i � igual a %i.", n1, fatorado);

    return 0;
}
