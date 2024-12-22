#include <stdio.h>
#include <stdlib.h>

/*
Atalhos do Code Blocks
- Start    :  F8                | Iniciar o debugger:
- Next line:  F7                | O programa executa passo a passo
- Step into:  Shift + F7        | Entrar dentro de um função
- Step out :  Shift + Ctrl + F7 | Ignorar uma função, voltar para o código
- Continue :  Ctrl + F7         | Avançar o código, ir direto para o próximo breakpoint
*/

int fatorial(int n){
    int i,f = 1;
    for(i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}

int main(){
    int x,y;
    printf("Digite um valor inteiro: ");
    scanf("%d",&x);

    // break point para debug
    if(x > 0){
        printf("%d eh positivo\n", x);
        y = fatorial(x);
        printf("Fatorial de %d eh %d\n", x, y);

        }else{
            if(x < 0)
                printf("%d eh negativo\n", x);
            else
                printf("%d eh Zero\n", x);
        }

        // break point para debug
        printf("Fim do programa!\n");
        system("pause");
        return 0;
}
