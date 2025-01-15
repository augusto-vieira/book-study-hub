# Capítulo 2 - Lendo e escrevendo nas variáveis

Nesta capitulo, o autor vai apresentar os conceitos de variáveis:
- Declarar variáveis.
- Definir com precisão o tipo da variável.
- Escrever suas variáveis na tela.
- Ler suas variáveis do teclado.
- Determinar o escopo da variável.
- Declarar e utilizar constantes.

>Variável é uma posição de memória em que podemos guardar determinado dado ou valor e modificá-lo ao longo da execução do programa.

### Variáveis
#### 2.1.1. Declarando uma variável 
```c
int x;
int x,y,z;
```
O operador **" ; "** ponto e virgula é utilizado para separar as `instruções` da linguagem C.

#### 2.1.2. Dando um nome à variável 
> A liguagem C tem 32 palavras chaves reservadas.

| Lista de palavras-chave da linguagem C |        |        |        |        |        |        |        |        |
| ------------------------------------- | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |		
| auto	| double	| int	| struct	| break	    | else	| long	 	| switch |
| case	| enum	 	| if	| typeof	| continue	| float	| return	| while  |
| union	| const	 	| for	| short	    | unsigned	| char	| extern	| signed |
| void	| default 	| do	| sizeof	| volatile	| goto	| register	| static |

#### 2.1.3. Definido o tipo da nossa variável
A linguagem C possui um total de `5 tipos de dados básicos`.
- `char`  : 1-byte, intervalo de -128 a 127.
- `int`   : 4-byte.
- `float` : 4-byte.
- `double`: 8-byte.
- `void`  : 1-byte, sem valor.

#### 2.1.4. Os modificadores de tipo de uma variável
A linguagem C possui um total de `4 tipos de modificadores`.

- `signed`   : **char ou int** deve ter valor positivo e negativo, habilitado por padrão não precisa ser explicito na declaração.
  - **signed** char x;
  - **signed** char y;

- `unsigned` : **char ou int** deve ter valor somente positivo.
  - **unsigned** char x;
  - **unsigned** char y;
- `short`    : **int** deve ter somente 2-byte, independente do processador.
  - **short** int i;
- `long`     : **int** deve ter 4-byte, independente do processador.
  - **long** int n;
  - **long** double d;

Usando mais de modificador ao mesmo tempo:
- Inteiro grande (**4-byte**), independente do processador(**long**), sem sinal (**unsigned (+)**).
```c
unsigned long int m;
```

### 2.2. Escrevendo suas variáveis na tela
#### 2.2.1. Printf
A função `printf()`, do inglês `print formatted`, é uma função de saída/escrita da linguagem C.

| Alguns tipos de saída|
| ---------------------|
| `%c`: escrita de um caractere (**char**) |
| `%d` ou `%i`: escrita de números inteiros (**int ou char**) |
| `%u`: escrita de números inteiros sem sinal (**unsigned**) |
| `%f`: escrita de número reais (**float ou double**) |
| `%s`: escrita de vários caracteres (**string**) |
| `%p`: escrita de um **endereço de memória** |
| `%e` ou `E`: escrita em **notação científica** |

#### 2.2.2 Putchar
A função `putchar()` (put character) permite escrever um único caractere na tela. Sua forma geral é:
```c
int putchar(int caractere);
```
- Se NÃO ocorrer erro: o próprio caractere que foi escrito.
- Se ocorrer erro: a constante EOF (definida na biblioteca stdio.h) é retornada.

**Exemplos: putchar()**
```c
char c = 'a';
int  x =  65;
putchar(c);    // Escreve 'a'
putchar('\n'); // Nova Linha
putchar(x);    // Escreve o valor 65 como caractere ('a')
```

### 2.3 Lenso suas variáveis do teclado
#### 2.3.1. Scanf
A função `scanf()` é uma das funções de entrada/leitura de dados da linguagem C. Seu nome vem da expressão
em inglês `scanformatted`, ou seja, leitura formatada.
```c
scanf("tipos de entrada", lista de variáveis);
```
- "tipos de entrada": conjunto de caracteres que especifica o formato dos dados a serem lidos.
- lista de variáveis: conjunto de nomes de variáveis que serão lidos e separados por vírgula, em que cada
nome de variável é precedido pelo operador `&`

> A função `scanf()` pode ser usada para ler praticamente qualquer tipo de dado. No entanto, ela é usada com mais frequência para a leitura de números inteiros e/ou de ponto flutuante (números reais). A Tabela 2.4 mostra alguns tipos de saída suportados pela linguagem.

| Alguns tipos de saída | Descrição                                                   |
| --------------------- | ----------------------------------------------------------- |
| %c                    | Leitura de um caractere (**char**)                          |
| %d ou %i              | Leitura de números inteiros (**int ou char**)               |
| %f                    | Leitura de números reais (**float**)                        |
| %s                    | Leitura de vários caracteres (**string**)                   |
| %lf                   | Leitura de números reais (**double**)                       |

**Exemplos: scanf()**
```c
int x, z;
float v;

/* Leitura de um valor inteiro */
scanf("%d", &x);

/* Leitura de um valor real */
scanf("%f", &y);

/* Leitura de um valor inteiro e outro real */
scanf("%d%f", &x, &y);

/* Leitura de dois valores inteiros */
scanf("%d%d", &x, &z);

/* Leitura de dois valores inteiros com espaço */
scanf("%d %d", &x, &z);
```
> O comando `scanf()` ignora os espaços em branco entre os tipos de entrada. Além disso, quando o comando é usado para ler dois ou mais valores, podemos optar por duas formas de digitar os dados no teclado:
1. Digitar um valor e, em seguida, pressionar a tecla ENTER. Fazer isso para cada valor a ser digitado.
2. Digitar todos os valores separados por espaço e, por último, pressionar a tecla ENTER.

Podemos usar o `scanf()` para receber dados formatados com uma data: `dia/mês/ano`.
Obs: o Usuário deve digitar os valores separador por barra, do contrário, o comando não lerá corretamente os dados digitados. 
```c
int dia, mes, ano;
scanf("%d/%d/%d", &dia, &mes, &ano);
```

#### 2.3.2. Getchar
A função `getchar() (get character)` permite ler um único caractere do teclado
```c
int getchar(void);
```
A função `getchar()` não recebe parâmetros de entrada. A função retorna:
- Se **NÃO ocorrer erro**: o código ASCII do caractere lido.
- Se ocorrer erro: a constante **EOF** (definida na biblioteca stdio.h) é retornada.

**Exemplos: getchar()**
```c
char c;
c = getchar();
printf("Caractere: %c\n", c);
```

### 2.4. Escopo: o tempo de vida da variável

O escopo é o conjunto de regras que determinam o uso e a validade das variáveis ao longo do programa.

#### 2.4.1. O escopo global
Uma variável global é declarada fora de funções, geralmente na parte superior do programa, antes do `main`. Ela existe durante toda a execução do programa e pode ser *acessada e alterada em qualquer parte do código*.

```c
int x = 5; // Variável global
int main(){
  printf("x = %d\n", x);
  printf("x = %d\n", x++);
}
```
> De modo geral, evita-se o uso de variáveis globais em um programa.

Variáveis globais devem ser evitadas, pois podem ser alteradas em qualquer parte do programa, dificultando a manutenção, *as variáveis globais ocupam memória durante todo o tempo de execução do programa e não apenas quando são necessárias.*

#### 2.4.1. O escopo local
Uma variável declarada no escopo local, ou simplesmente variável local, é uma variável declarada dentro de um bloco de comandos delimitado pelo operador de chaves `({}, escopo local)`. Essas variáveis são visíveis apenas
*no interior do bloco de comandos* onde foram declaradas, ou seja, apenas dentro do seu escopo.

```c
void func1(){
  int x; // Variável local
}
void func2(){
  int x; // Variável local
}
int main{
  int x; // Variável local
  scanf("%d", &x);

  if(x == 5){
    int y = 1;  // Escopo local, dentro de outro escopo local (main{})
    printf("%d\n", y)
  }
}
```
### 2.4. Constantes
Uma variável é uma posição de memória onde podemos armazenar e modificar dados durante a execução do programa. Já uma constante armazena um valor que não pode ser alterado ao longo da execução, permanecendo sempre o mesmo.

> Para constantes. é obrigatória a atribuição do valor no momento da declaração.

C existem duas maneiras de criar constantes: usando os comandos "`#define` e `const`. Além disso, a própria linguagem C possui
algumas `constantes predefinidas, como as sequências de escape.`
```c
#define PI 13.1415
const float PI = 13.1415
```

#### 2.5.1 Valor literal
Um `valor literal` é a represenção de um dado dentro do próprio código-fonte. Na declaração a seguir, 10 é um valor literal.
```c
int n = 10;
```
A linguagem C permite que indiquemos O tipo de um valor literal pela adição de um Sufixo.
O sufixo de tipo nada mais é do que um caractere de tipo acrescentada ao final do valor literal, sem nenhum espaço entre eles- Eles são úteis para forçar o resultado de urna expressão para uma precisão particular.

| Sufixo | Tipo             | Exemplo         |
|--------|------------------|-----------------|
| Sem sufixo | double          | 10.5            |
|          | int             | 10              |
| f ou F   | float           | 3.14F           |
| l ou L   | long double     | 123456.789L     |
|          | long int        | 123456799L      |
| u ou U   | unsigned int    | 453U            |
| ul ou UL | unsigned long int | 123456789UL    |

#### 2.5.4 As sequências de escape
A linguagem C possui algumas constantes predefinidas, como as `sequências de escape ou códgos de barra invertida`. As sequências de escape permitem o envio de caracteres de controle não gráficos para dispositivos de saída.
| Código | Comando                           |
|--------|-----------------------------------|
| \a     | som de alerta (bip)               |
| \b     | retrocesso (backspace)            |
| \n     | nova linha (new line)             |
| \r     | retorno de carro (carriage return)|
| \v     | tabulação vertical               |
| \t     | tabulação horizontal             |
| \\'     | apóstrofe                         |
| \\"     | aspa                              |
| \\\     | barra invertida (backslash)       |
| \f     | alimentação de folha (form feed)  |
| \\?     | símbolo de interrogação           |
| \0     | caractere nulo (cancela a escrita do restante) |

As sequências de escape permitem que o comando `printf()` imprima caracteres especiais na tela de saída, como tabulações e quebras de linha.

---

### Meu complemento🔬📝

#### Tipos de inicialização:
- **Inicialização implícita (não inicializada):**

Se uma variável não for inicializada explicitamente, ela conterá um valor indefinido (lixo de memória).
  ```c
  int x;
  int w,y,z;
  int v[3];
  int *ptr; 
  struct _estrutura st;
  ```

- **Inicialização explícita:**
```c
int x = 10; 
int x = 1, y = 2, z = 3;
int v[3] = {1, 2, 3};
int *ptr = NULL;
struct _estrutura st = {10, 20, 30};
```

- **Inicialização explícita (vazia):**

```c
// Todo vetor é inicializado com zero:
int v[3] = {0};

// Inicializando o ponteiro com valor nulo.
int *ptr = NULL;

// Toda a struct é inicializada com zero
struct _estrutura p = {0};

// Outra possibilidade:
// demais valores assume o valor de zero {1, 0, 0}
int v[3] = {1};

// demais valores assume o valor de zero {10, 0, 0}
struct _estrutura st = {10};
```