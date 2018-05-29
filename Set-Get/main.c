#include <stdio.h>
#include <stdlib.h>

#include "Dato.h"


int main()
{
    eDato* d;

    //d = new_eDato(limiteDato);
    //eDato_set_a((d+i),(i+1)*2);
    //eDato_set_b((d+i),"hola");

    //printf("a:%d b:%s", eDato_get_a(d+i), eDato_get_b(d+i));

    d = new_eDato_parametros(25, "al toque perro");

    printf("a:%d b:%s", eDato_get_a(d), eDato_get_b(d));

    return 0;
}

