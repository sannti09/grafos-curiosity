

#ifndef EDD_PROYECTO_CURIOSITY_NODOMARCIANO_H
#define EDD_PROYECTO_CURIOSITY_NODOMARCIANO_H
#include <iostream>
#include "Elemento.h"
#include <queue>

class NodoMarciano {
private:
    Elemento elemento;
    NodoMarciano *sup_izq = NULL;
    NodoMarciano *sup_der = NULL;
    NodoMarciano *inf_izq = NULL;
    NodoMarciano *inf_der = NULL;
    std::vector<NodoMarciano*> vecinos;
    int id;

public:
    NodoMarciano();
    Elemento getElemento();
    void setElemento(Elemento new_elemento);
    NodoMarciano* getSupIzq();
    void setSupIzq(NodoMarciano *new_sup_izq);
    NodoMarciano* getSupDer();
    void setSupDer(NodoMarciano *new_sup_der);
    NodoMarciano* getInfIzq();
    void setInfIzq(NodoMarciano *new_inf_izq);
    NodoMarciano* getInfDer();
    void setInfDer(NodoMarciano *new_inf_der);
    void agregarUbicacion(Elemento e);
    bool esHoja();
    void imprimirHijos();
    void imprimirCuadrantes(float coordX1, float coordX2, float coordY1, float coordY2);
    void agregarVecino(NodoMarciano* vecino);
    std::vector<NodoMarciano*> getVecinos();


};


#endif //EDD_PROYECTO_CURIOSITY_NODOMARCIANO_H
