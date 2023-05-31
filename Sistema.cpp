//
// CREADO POR JUAN MUNOZ, VICTOR PENARANDA Y SANTIAGO RUEDA
// ENTREGA 1
//
#include "Comandos.h" //g++ sistema.cpp comandos.cpp -o sistema

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    char *input = new char[100]; //Cadena de caracteres para recibir los comandos.
    Comandos comandos = *new Comandos; //Instancia de la clase Comandos
    comandos.iniciar_mapa(); //Inicializacion del Map para ejecutar los comandos
    while(true){
        std::cout << "$ ";
        std::cin.getline(input, 100); //Recepcion de datos de entrada
        comandos.setInput(input); //Setter de los comandos
        comandos.procesamiento(); //Procesamiento de comandos
    }
}

