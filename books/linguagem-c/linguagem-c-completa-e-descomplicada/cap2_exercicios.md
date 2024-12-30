# 2.6. Exercícios:

1) Elabore um programa que escreva as mensagens "Inicio do programa" e "Fim" na tela, uma em cada linha, usando apenas um comando printf().
```c
int main(){
    printf("Inicio do programa\n");
    printf("Fim\n");
    return 0;
}
```
2) Escreva um programa que leia um número inteiro e depois o imprima.
```c
int main(){
    int inteiro = 0;
    printf("digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("%d\n",inteiro);
    return 0;
}
```
3) Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido:", seguido do valor inteiro. Use apenas um comando printf().
```c
int main(){
    int inteiro = 0;
    printf("digite um numero inteiro:\n");
    scanf("%d", &inteiro);
    printf("Valor lido: %d\n", inteiro);
    return 0;
}
```
4) Faça um programa que leia um número inteiro e depois o imprima usando o operador "%f". Veja o que aconteceu.
```c
int main(){
    int inteiro = 0;
    printf("digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("%f\n",inteiro);
    return 0;
}
```
Primeiro ocorreu  warning na compilação, posteriomente o programa sempre **retorna zero.**

```bash
cap2-exercicio_1.c: In function ‘main’:
cap2-exercicio_1.c:7:14: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
    7 |     printf("%f\n",inteiro);
      |             ~^    ~~~~~~~
      |              |    |
      |              |    int
      |              double
      |             %d
```
Saída:
```bash
digite um numero inteiro: 42
0.000000
```

5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador "%d". Veja o que aconteceu.
```c
int main(){
    float flutuante = 0;
    printf("digite um numero inteiro: ");
    scanf("%f", &flutuante);
    printf("%d\n",flutuante);
    return 0;
}
```
Primeiro ocorreu  warning na compilação, posteriomente o programa sempre **retorna um número interiro aletório.**
```bash
cap2-exercicio_1.c: In function ‘main’:
cap2-exercicio_1.c:7:14: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    7 |     printf("%d\n",flutuante);
      |             ~^    ~~~~~~~~~
      |              |    |
      |              int  double
      |             %f
```
Saída:
```bash
digite um numero inteiro: 42.42
1110027796
```
6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notacão científica.
```c
    double tipe_1 = 0;
    double tipe_2 = 0;
    printf("digite um numero flutuante:\n");
    scanf("%lf%lf", &tipe_1, &tipe_2);
    printf("%E\n%e\n", tipe_1, tipe_2);
    return 0;
```
Saída:
```bash
digite um numero flutuante:
3.1415
1,4142
3.141500E+00
1.000000e+00
```
7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
```c
int main(){
    char caractere = '\0';
    caractere = getchar();
    printf("Codigo ASCCII: %d\n", caractere);
    return 0;
}
```
Saída:
```bash
a
Codigo ASCCII: 97
```

8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
```c
int main(){
    int num_1 = 0;
    int num_2 = 0;
    scanf("%d%d",&num_1, &num_2);
    printf("Ordem trocada:\n%d\n%d\n", num_2, num_1);
    return 0;
}
```
Saída:
```bash
1
2
Ordem trocada:
2
1
```
9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
```c
int main(){
    float num_1 = 0;
    float num_2 = 0;
    scanf("%f%f",&num_1, &num_2);
    printf("Ordem trocada:\n%.2f\n%.2f\n", num_2, num_1);
    return 0;
}
```
Saída:
```bash
3.14
1.41
Ordem trocada:
1.41
3.14
```
10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\\).
```c
int main(){
    int dia = 0;
    int mes = 0;
    int ano = 0;
    printf("Digita da data: dia/mes/ano\n");
    scanf("%d/%d/%d",&dia, &mes, &ano);
    printf("Data: %d/%d/%d\n", dia, mes, ano);
    return 0;
}
```
Saída:
```bash
Digita da data: dia/mes/ano
12/29/2024
Data: 12/29/2024
```
11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.
```c
#define PI 3.1415
int main(){
    printf("Constante Simbolica: %.4f\n", PI);
    return 0;
}
```
Saída:
```bash
Constante Simbolica: 3.1415
```

12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando const. Imprima constante.
```c
int main(){
    const int num = 42;
    printf("Constante Literal: %d\n", num);
    return 0;
}
```
Saída:
```bash
Constante Literal: 42
```
13) Faça um programa que Leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, o caractere lido for a letra A. deverá ser impresso "A".
```c
int main(){
    char caractere = '\0';
    caractere = getchar();
    printf("\"%c\"\n", caractere);
    return 0;
}

```
Saída:
```bash
K
"K"
```
14) Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada Linha. Use um único comando printf() para isso.
```c
int main(){
    char caracteres[4] = {0};
    printf("Digite 3 caracteres: ");
    scanf("%3s", caracteres);
    printf("1-%c\n2-%c\n3-%c\n", caracteres[0], caracteres[1], caracteres[2]);
    return 0;
}

```
Saída:
```bash
Digite 3 caracteres: AB7
1-A
2-B
3-7
```
15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada tinha. Use um único comando printf() para cada operação de escrita das três variáveis.
```c
int main(){
    char  caracter  = '\0';
    int   inteiro   =   0;
    float flutuante =   0;
    printf("Digite: Caracter - Inteiro - Flutuante:\n");
    scanf("%c%i%f", &caracter, &inteiro, &flutuante);
    printf("Espaco: %c %i %.3f\n"    ,caracter, inteiro, flutuante);
    printf("Tabulada: %c\t%i\t%.3f\n",caracter, inteiro, flutuante);
    printf("Pulando:\n%c\n%i\n%.3f\n",caracter, inteiro, flutuante);
    return 0;
}
```
Saída:
```bash
Digite: Caracter - Inteiro - Flutuante:
A
42
3.141 
Espaco: A 42 3.141
Tabulada: A     42      3.141
Pulando:
A
42
3.141
```