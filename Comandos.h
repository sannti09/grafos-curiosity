

#ifndef EDD_PROYECTO1_LIMPIO_COMANDOS_H
#define EDD_PROYECTO1_LIMPIO_COMANDOS_H
#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <queue>
#include <cstring>
#include <fstream>
#include "Movimiento.h"
#include "Elemento.h"
#include "Analisis.h"
#include "OrdenComandos.h"
#include <cmath>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "CieloMarciano.h"
#include "Grafo.h"



class Comandos {
private:
    const float PI = 3.14159265359;
    //Mapa de los comandos
    std::map<std::string,int> switchmap;
    //Vector con los parametros recibidos
    std::vector<char*> parametros;
    //Estructuras lineales para almacenar los datos
    std::queue<Movimiento> cola_comandos;
    std::queue<Elemento> cola_elementos;
    std::queue<Analisis> cola_analisis;
    std::vector<OrdenComandos> lista_comandos;
    Grafo grafo;


    CieloMarciano cieloMarciano;
    char* input;
    bool auxE = false;

public:


//Encabezado de las funciones
    char *getInput() const;
    void setInput(char *input);
    void iniciar_mapa();
    void procesamiento();
    int cargar_comandos();
    int cargar_elementos();
    int agregar_movimiento();
    int agregar_analisis();
    int agregar_elemento();
    int guardar();
    int simular_comandos();
    int salir();
    int ubicar_elementos();
    int en_cuadrante();
    int crear_mapa();
    int ayuda();
    void seleccion();
    bool validar_parametros(int cant_parametros);
    float calcularDistanciaEuclidiana(const Elemento& elemento1, const Elemento& elemento2);
    void encontrarComponentesMasAlejados();
    
    };


#endif //EDD_PROYECTO1_LIMPIO_COMANDOS_H
