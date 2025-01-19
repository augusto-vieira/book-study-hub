#ifndef KEYBOARD_H_
#define KEYBOARD_H_

/* Interface que utilizaremos no contexto do keyboard */
#include <input_base.h> 

/* Criamos o contexto do keyboard, nele possuímos somente a inteface Input */
typedef struct 
{
    input_base_t base;
}keyboard_t;

/* Função responsável pela inicialização */
bool keyboard_open(keyboard_t *object);

#endif /* KEYBOARD_H_*/