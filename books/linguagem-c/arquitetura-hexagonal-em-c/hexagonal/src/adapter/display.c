#include<stdio.h>
#include<string.h>

/* Header que contém as definições das funções que devemos implementar */
#include "display.h"

/* Protótipo da função que a interface precisa preencher */
static bool display_set_tex(void *object, char *buffer, size_t size);

bool display_open(display_t *object)
{
    bool status = false;

     /* Verifica se a instância é válida */
    if(object != NULL)
    {
        /* Limpamos o contexto do display_t */
        memset(object, 0, sizeof(display_t));

        /* Preenche a interface com a própria referência */
        object->base.object = object;
        
        /* Atribuímos a função que será usada pela interface*/
        object->base.set_text = display_set_tex;

        status = true;
    }

    return status;
}

/* Função que recebe um buffer contendo a string e imprime na tela */
static bool display_set_tex(void *object, char *buffer, size_t size)
{
    (void)object;
    (void)size;

    printf("%s", buffer);
    fflush(stdout);

    return true;
}


