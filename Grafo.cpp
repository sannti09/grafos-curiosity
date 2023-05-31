
#include <iostream>
#include <vector>
#include <math.h>
#include "Grafo.h"
#include "NodoMarciano.h"


using namespace std;

Grafo::Grafo() {
        vectorId = 0; // Inicializar el identificador del vector en 0
    }

    void Grafo::agregarNodo(NodoMarciano* nodo) {
        // Agregar un nuevo vector si el vector actual está vacío
        if (vectores.empty() || vectores[vectorId].empty()) {
            vectores.push_back(std::vector<NodoMarciano*>());
        }

        // Agregar el nodo al vector actual
        vectores[vectorId].push_back(nodo);
    }

void Grafo::agregarArista(NodoMarciano* nodoOrigen, NodoMarciano* nodoDestino) {
    nodoOrigen->agregarVecino(nodoDestino);
    nodoDestino->agregarVecino(nodoOrigen);
}

NodoMarciano* Grafo::getNodo(int idNodo) {
        // Verificar si el identificador del nodo es válido
        if (idNodo >= 0 && idNodo < vectores[vectorId].size()) {
            // Obtener el nodo del vector actual y devolverlo
            return vectores[vectorId][idNodo];
        }
        return nullptr; // Devolver nullptr si el identificador no es válido
    }


std::vector<NodoMarciano*> Grafo::getTodosNodos() {
    std::vector<NodoMarciano*> todosNodos;
    for (auto& vectorNodos : vectores) {
        for (auto& nodo : vectorNodos) {
            todosNodos.push_back(nodo);
        }
    }
    return todosNodos;
}



std::pair<float, std::vector<NodoMarciano*>> Grafo::calcularRutaMasLarga(NodoMarciano* origen) {
    std::vector<NodoMarciano*> rutaActual;
    std::vector<NodoMarciano*> rutaMasLarga;
    std::map<NodoMarciano*, bool> visitado;
    float maxDistancia = 0;

    for(NodoMarciano* nodo : getTodosNodos()){
        visitado[nodo] = false;
    }

    visitado[origen] = true;
    DFS(origen, visitado, rutaActual, rutaMasLarga, maxDistancia);

    return std::make_pair(maxDistancia, rutaMasLarga);
}

void Grafo::DFS(NodoMarciano* nodo, std::map<NodoMarciano*, bool>& visitado, std::vector<NodoMarciano*>& rutaActual, std::vector<NodoMarciano*>& rutaMasLarga, float& maxDistancia) {
    rutaActual.push_back(nodo);
    if(rutaActual.size() > rutaMasLarga.size()){
        rutaMasLarga = rutaActual;
        maxDistancia = calcularDistanciaTotal(rutaMasLarga);
    }

    for(NodoMarciano* vecino : nodo->getVecinos()){
        if(visitado[vecino] == false){
            visitado[vecino] = true;
            DFS(vecino, visitado, rutaActual, rutaMasLarga, maxDistancia);
        }
    }

    rutaActual.pop_back();
}

float Grafo::calcularDistanciaTotal(const std::vector<NodoMarciano*>& ruta) {
    float distanciaTotal = 0;
    for(int i = 0; i < ruta.size() - 1; i++) {
        distanciaTotal += calcularDistanciaEuclidiana1(ruta[i]->getElemento(), ruta[i+1]->getElemento());
    }
    return distanciaTotal;
}

float Grafo::calcularDistanciaEuclidiana1(const Elemento& elemento1, const Elemento& elemento2) {
    float deltaX = elemento2.getCoordX() - elemento1.getCoordX();
    float deltaY = elemento2.getCoordY() - elemento1.getCoordY();
    float distancia = sqrt(deltaX * deltaX + deltaY * deltaY);
    return distancia;
}




