
#include "OrdenComandos.h"

Movimiento* OrdenComandos::getMovimiento()
{
    return ptr_M;
}
void OrdenComandos::setMovimiento(Movimiento* ptr){
    ptr_M = ptr;
}

Analisis* OrdenComandos::getAnalisis()
{
    return ptr_A;
}
void OrdenComandos::setAnalisis(Analisis* ptr)
{
    ptr_A = ptr;
}
