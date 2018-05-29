#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dato.h"

int eDato_set_a(eDato* dato, int valor)
{
    int ret = 0;
    if(dato!=NULL && valor>0)
    {
        dato->a = valor;
        ret = 1;
    }

    return ret;
}

int eDato_set_b(eDato* dato, char* valor)
{
    int ret = 0;
    if(dato!=NULL && valor!=NULL)
    {
        strcpy(dato->b , valor);
        ret = 1;
    }

    return ret;
}

int eDato_get_a(eDato* dato)
{
    int valor = -1;

    if(dato!=NULL)
    {
        valor = dato->a;
    }

    return valor;
}

char* eDato_get_b(eDato* dato)
{
    char* valor;
    if(dato!=NULL)
    {
       valor=dato->b;
    }

    return valor;
}

eDato* new_eDato()
{
    eDato* retorno;

    retorno = (eDato*)malloc(sizeof(eDato));

    return retorno;
}

eDato* new_eDato_parametros(int a, char* b)
{
    eDato* retorno;

    retorno = new_eDato();

    if(retorno!=NULL)
    {
        eDato_set_a(retorno, a);
        eDato_set_b(retorno, b);
    }
    return retorno;
}
