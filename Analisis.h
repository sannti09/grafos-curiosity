


#ifndef EDD_PROYECTO1_LIMPIO_ANALISIS_H
#define EDD_PROYECTO1_LIMPIO_ANALISIS_H
#include <iostream>
#include <cstring>


class Analisis {
private:
    char* tipo_analisis = new char[100];
    char* objeto = new char[100];
    char* comentario = new char[100];
public:
    char *getTipoAnalisis() const;

    void setTipoAnalisis(char *tipoAnalisis);

    char *getObjeto() const;

    void setObjeto(char *objeto);

    char *getComentario() const;

    void setComentario(char *comentario);
    void toString();
};


#endif //EDD_PROYECTO1_LIMPIO_ANALISIS_H
