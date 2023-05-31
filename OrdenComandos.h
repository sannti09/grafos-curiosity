
#include "Comandos.h"

#ifndef PROYECTO_ORDENCOMANDOS_H
#define PROYECTO_ORDENCOMANDOS_H


class OrdenComandos {
private:
    Movimiento *ptr_M = NULL;
    Analisis *ptr_A = NULL;
public:
    Movimiento* getMovimiento();
    void setMovimiento(Movimiento* ptr);

    Analisis* getAnalisis();
    void setAnalisis(Analisis* ptr);


};


#endif //PROYECTO_ORDENCOMANDOS_H
