

#include "Analisis.h"


char *Analisis::getTipoAnalisis() const {
    return tipo_analisis;
}

void Analisis::setTipoAnalisis(char *tipoAnalisis) {
    std::strcpy(Analisis::tipo_analisis, tipoAnalisis);

}

char *Analisis::getObjeto() const {
    return objeto;
}

void Analisis::setObjeto(char *objeto) {
    std::strcpy(Analisis::objeto, objeto);
}

char *Analisis::getComentario() const {
    return comentario;
}

void Analisis::setComentario(char *comentario) {
    std::strcpy(Analisis::comentario, comentario);
}
void Analisis::toString() {
    std::cout << "Tipo analisis:" << tipo_analisis << std::endl
    << "Objeto:" << objeto << std::endl;
    if(comentario!=NULL)
    std :: cout << "Comentario:" << comentario << std::endl;
}
