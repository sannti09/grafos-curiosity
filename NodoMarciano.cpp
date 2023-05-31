

#include "NodoMarciano.h"
NodoMarciano::NodoMarciano() {}

Elemento NodoMarciano::getElemento() {
    return elemento;
}
void NodoMarciano::setElemento(Elemento new_elemento) {
    elemento = new_elemento;
}
NodoMarciano* NodoMarciano::getSupIzq() {
    return sup_izq;
}
void NodoMarciano::setSupIzq(NodoMarciano *new_sup_izq) {
    sup_izq = new_sup_izq;
}
NodoMarciano* NodoMarciano::getSupDer() {
    return sup_der;
}
void NodoMarciano::setSupDer(NodoMarciano *new_sup_der) {
    sup_der = new_sup_der;
}
NodoMarciano* NodoMarciano::getInfIzq() {
    return inf_izq;
}
void NodoMarciano::setInfIzq(NodoMarciano *new_inf_izq) {
    inf_izq = new_inf_izq;
}
NodoMarciano* NodoMarciano::getInfDer() {
    return inf_der;
}
void NodoMarciano::setInfDer(NodoMarciano *new_inf_der) {
    inf_der = new_inf_der;
}
void NodoMarciano::agregarUbicacion(Elemento e){
    if(e.getCoordX() == elemento.getCoordX() && e.getCoordY() == elemento.getCoordY()) {
        std::cout << "Los siguientes elementos no pudieron procesarse adecuadamente:" << std::endl << std::endl;
        e.toSting();
    }
      if(e.getCoordX() > elemento.getCoordX() && e.getCoordY() < elemento.getCoordY())
    {
        if(sup_izq == NULL) {
            sup_izq = new NodoMarciano();
            sup_izq->setElemento(e);
        }else{
            sup_izq->agregarUbicacion(e);
        }
    }
    if(e.getCoordX() > elemento.getCoordX() && e.getCoordY() > elemento.getCoordY())
    {
        if(sup_der == NULL) {
            sup_der = new NodoMarciano();
            sup_der -> setElemento(e);
        }else{
            sup_der -> agregarUbicacion(e);
        }
    }
    if(e.getCoordX() < elemento.getCoordX() && e.getCoordY() > elemento.getCoordY())
    {
        if(inf_der == NULL) {
            inf_der = new NodoMarciano();
            inf_der -> setElemento(e);
        }else{
            inf_der -> agregarUbicacion(e);
        }
    }
    if(e.getCoordX() < elemento.getCoordX() && e.getCoordY() < elemento.getCoordY())
    {
        if(inf_izq == NULL) {
            inf_izq = new NodoMarciano();
            inf_izq -> setElemento(e);
        }else{
            inf_izq -> agregarUbicacion(e);
        }
    }
}
bool NodoMarciano::esHoja(){
    if(sup_izq == NULL && sup_der == NULL && inf_izq == NULL && inf_der == NULL)
        return true;
    return false;
}
void NodoMarciano::imprimirHijos() {

    std::cout << "CoorX: " << elemento.getCoordX() << std::endl;
    std::cout << "CoorY: " << elemento.getCoordY() << std::endl;

    if(esHoja())
        return;
    if(sup_izq != NULL)
    {
        sup_izq->imprimirHijos();
    }
    if(sup_der != NULL)
    {
        sup_der->imprimirHijos();
    }
    if(inf_izq != NULL)
    {
        inf_izq->imprimirHijos();
    }
    if(inf_der != NULL)
    {
        inf_der->imprimirHijos();
    }
    return;
}
void NodoMarciano::imprimirCuadrantes(float coordX1, float coordX2, float coordY1, float coordY2) {

    if(elemento.getCoordX() >= coordX1 && elemento.getCoordX() <= coordX2
    && elemento.getCoordY() >= coordY1 && elemento.getCoordY() <= coordY2 && elemento.getCoordX() != 0 && elemento.getCoordY() != 0)
    {
        elemento.toSting();
    }

    if(esHoja())
        return;
    if(sup_izq != NULL)
    {
        sup_izq->imprimirCuadrantes(coordX1, coordX2, coordY1, coordY2);
    }
    if(sup_der != NULL)
    {
        sup_der->imprimirCuadrantes(coordX1, coordX2, coordY1, coordY2);
    }
    if(inf_izq != NULL)
    {
        inf_izq->imprimirCuadrantes(coordX1, coordX2, coordY1, coordY2);
    }
    if(inf_der != NULL)
    {
        inf_der->imprimirCuadrantes(coordX1, coordX2, coordY1, coordY2);
    }
    return;
}


void NodoMarciano::agregarVecino(NodoMarciano* vecino) {
    vecinos.push_back(vecino);
}

std::vector<NodoMarciano*> NodoMarciano::getVecinos() {
    return vecinos;
}


