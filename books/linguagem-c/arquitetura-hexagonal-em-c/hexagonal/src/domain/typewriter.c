#include <string.h>
#include <ctype.h>

/* Header que contém as definições das funções que devemos implementar */
#include "typewriter.h"

/* Verifica se todos os argumentos estão devidamente preenchidos*/
static bool typewriter_is_args_valid(typewriter_args_t *args);

/* Transforma todos os caracteres do buffer em minúsculo */
static void typewriter_to_lower_case(char *buffer);

/* Faz a verificação dos argumentos e as atribuições das interfaces */ 
bool typewriter_open(typewriter_t *object, typewriter_args_t *args)
{
    bool status = false;

    /* Faz a verificação dos argumentos */
    if(object != NULL && typewriter_is_args_valid(args) == true)
    {
        /* Limpamos o contexto typewriter_t */
        memset(object, 0, sizeof(typewriter_t));
        
        object->ib = args->ib;
        object->ob = args->ob;

        object->buffer.data = args->buffer.data;
        object->buffer.size = args->buffer.size;

        status = true;
    }
    return status;
}

/* 
   Função principal
   Recebe a strings da Interface Input,
   converte e envia para a Interface Output 
*/
bool typewriter_run(typewriter_t *object)
{
    bool status = false;

    /* Verifica se a instância não é nula */
    if (object != NULL)
    {
        /* Loop principal que fica recebendo as strings */
        while (true)
        {
            memset(object->buffer.data, 0, object->buffer.size);
            if (object->ib->get_text(object->ib->object,                                    
                                     object->buffer.data, 
                                     object->buffer.size) == true)
            {
                typewriter_to_lower_case(object->buffer.data);

                object->ob->set_text(object->buffer.data,
                                     object->buffer.data,
                                     object->buffer.size);
            }           
        }        
    }
    return status = false;
}

/* Verifica se todos os argumentos são validos, caso sim, retorna verdadeiro */
static bool typewriter_is_args_valid(typewriter_args_t *args)
{
    bool status = false;

    if (args              != NULL && 
        args->ib          != NULL &&
        args->ob          != NULL &&
        args->buffer.data != NULL &&
        args->buffer.size > 0)
    {
        status = true;
    }
    return status;
}

/* Itera cada caractere do buffer, convertendo em minuscula */
static void typewriter_to_lower_case(char *buffer)
{
    size_t size = strlen(buffer);
    for (size_t i = 0; i < size; i++)
    {
        buffer[i] = (char) tolower(buffer[i]);
    }
    
}