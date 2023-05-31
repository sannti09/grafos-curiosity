
#include "Elemento.h"



Elemento::Elemento(std::string tipo, float medida, std::string unidad, float coordX, float coordY) {
strncpy(tipo_comp, tipo.c_str(), 100);
tamanio = medida;
strncpy(u_medida, unidad.c_str(), 100);
coord_x = coordX;
coord_y = coordY;
}

Elemento::Elemento() {}

Elemento::Elemento(float x, float y){
    coord_y = y;
    coord_x = x;
}

char *Elemento::getTipoComp() const {
    return tipo_comp;
}

void Elemento::setTipoComp(char *tipoComp) {

    std::strcpy(Elemento::tipo_comp, tipoComp);
}

float Elemento::getTamanio() const {
    return tamanio;
}

void Elemento::setTamanio(float tamanio) {
    Elemento::tamanio = tamanio;
}

char *Elemento::getUMedida() const {
    return u_medida;
}

void Elemento::setUMedida(char *uMedida) {
    std::strcpy(Elemento::u_medida, uMedida);

}

float Elemento::getCoordX() const {
    return coord_x;
}

void Elemento::setCoordX(float coordX) {
    coord_x = coordX;
}

float Elemento::getCoordY() const {
    return coord_y;
}

void Elemento::setCoordY(float coordY) {
    coord_y = coordY;
}
void Elemento::toSting(){
    std::cout << "\nTipo de composición:" << tipo_comp << std::endl
            << "Tamaño:" << tamanio << std::endl
            << "Unidad de Medida:" << u_medida << std::endl
            << "Coordenada X:" << coord_x << std::endl
            << "Coordenada Y:" << coord_y<< std::endl;

}



