#ifndef TYPEWRITER_H_
#define TYPEWRITER_H_

/* Duas interfaces utilizadas pelo Typewriter */
#include <input_base.h>
#include <output_base.h>

typedef struct 
{
    /* Dois ponteiros, um para cada Interface*/
    input_base_t *ib;
    output_base_t *ob;

    /* Estrutura anonima como Buffer */
    struct 
    {
        char *data;
        size_t size;
    }buffer;
    
}typewriter_args_t;

typedef struct 
{
    input_base_t *ib;
    output_base_t *ob;

    struct 
    {
        char *data;
        size_t size;
    }buffer;
    
}typewriter_t;

/* Função responsável pela inicialização */
bool typewriter_open(typewriter_t *object, typewriter_args_t *args);

/* Coloca a aplicação em execução */
bool typewriter_run(typewriter_t *object);

#endif /* TYPEWRITER_H_ */ 