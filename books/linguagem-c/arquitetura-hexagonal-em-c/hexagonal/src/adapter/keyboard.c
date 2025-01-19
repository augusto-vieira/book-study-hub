#include <string.h>
#include <stdio.h>

/* Header que contém as definições das funções que devemos implementar */
#include "keyboard.h"

/* Protótipo da função que a interface precisa preencher */
static bool keyboard_get_text(void *object, char *buffer, size_t size);

/*  Faz a verificação dos argumentos e as atribuições das interfaces */
bool keyboard_open(keyboard_t *object)
{
    bool status = false;

    /* Verifica se a instância não é nula */
    if(object != NULL)
    {
        /* Limpamos o contexto do keyboard_t */
        memset(object, 0, sizeof(keyboard_t));

        /* Preenche a interface com a própria referência */
        object->base.object = object;

        /* Atribuímos a função para a interface*/
        object->base.get_text = keyboard_get_text;

        /* Por fim, muda o status para verdadeiro */
        status = true;
    }

    return status;
}

/* Função que será responsável por ler a string do teclado e enviar para aplicação */
static bool keyboard_get_text(void *object, char *buffer, size_t size)
{
    (void)object;
    fgets(buffer, size - 1, stdin);
    buffer[size] = 0;
    
    return true;
}
