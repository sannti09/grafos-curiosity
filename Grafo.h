#include <iostream>
#include <vector>
#include <map>
#include "NodoMarciano.h"



class Grafo {
private:
    std::vector<std::vector<NodoMarciano*>> vectores; // Vectores del grafo
    int vectorId; // Identificador del vector actual

public:
    Grafo();

    void agregarNodo(NodoMarciano* nodo);

    void agregarArista(NodoMarciano* nodoOrigen, NodoMarciano* nodoDestino);

    NodoMarciano* getNodo(int idNodo);

    std::vector<NodoMarciano*> getTodosNodos();  // Agregar esta declaración
    std::pair<float, std::vector<NodoMarciano*>> calcularRutaMasLarga(NodoMarciano* origen);

    float calcularDistanciaEuclidiana1(const Elemento& elemento1, const Elemento& elemento2);
    void DFS(NodoMarciano* nodo, std::map<NodoMarciano*, bool>& visitado, std::vector<NodoMarciano*>& rutaActual, std::vector<NodoMarciano*>& rutaMasLarga, float& maxDistancia);
    float calcularDistanciaTotal(const std::vector<NodoMarciano*>& ruta);

};


