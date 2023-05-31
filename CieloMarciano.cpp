

#include "CieloMarciano.h"
#include "Elemento.h"

void CieloMarciano::ubicarElementos(std::queue<Elemento> elementos) {

    origen = new NodoMarciano();
    Elemento aux;
    aux.setCoordX(0);
    aux.setCoordY(0);
    origen->setElemento(aux);

    for(int i=0; i<elementos.size()-1; i++)
    {
        origen->agregarUbicacion(elementos.front());
        elementos.push(elementos.front());
        elementos.pop();
    }
}
void CieloMarciano::imprimirCielo(){
    origen->imprimirHijos();

}
void CieloMarciano::en_cuadrante(float coordX1, float coordX2, float coordY1, float coordY2){
    origen->imprimirCuadrantes(coordX1, coordX2, coordY1, coordY2);

}
