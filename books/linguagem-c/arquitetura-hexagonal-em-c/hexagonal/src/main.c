/* Incluímos os adaptadores keyboard e display */
#include "keyboard.h"
#include "display.h"

/* Incluímos o nosso domínio, aplicação typewriter */
#include "typewriter.h"

int main(int argc, char *argv[])
{
    /* Declaramos as nossas variáveis do tipo Keyboard, Display e Typewriter */
    keyboard_t   keyboard;
    display_t    display;
    typewriter_t typewriter;

    /* Inicializamos Keyboard e Display com as suas funções Open */
    if(keyboard_open(&keyboard) == true &&
       display_open(&display)   == true)
    {
        /* Buffer para ler as nossas strings */
        char buffer[1024];
        
        typewriter_open(&typewriter, &(typewriter_args_t)
                        {
                            .ib = &keyboard.base,
                            .ob = &display.base,
                            .buffer = 
                                {
                                    .data = buffer,
                                    .size = sizeof(buffer),
                                }
                        });
        
        typewriter_run(&typewriter);
    }

    return 0;
}