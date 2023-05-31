

#ifndef EDD_PROYECTO_CURIOSITY_CIELOMARCIANO_H
#define EDD_PROYECTO_CURIOSITY_CIELOMARCIANO_H

#include "NodoMarciano.h"
#include "Elemento.h"
#include "queue"


class CieloMarciano {
private:
    NodoMarciano* origen = NULL;
    int id;
public:

// completa



    void ubicarElementos(std::queue<Elemento> elementos);
    void imprimirCielo();
    void en_cuadrante(float coordX1, float coordX2, float coordY1, float coordY2);

};


#endif //EDD_PROYECTO_CURIOSITY_CIELOMARCIANO_H
