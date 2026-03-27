#include "DataEstructure/grafo.hpp"
#include "Printer/printer.hpp"

int main(int argc, char const *argv[])
{
    Grafo g1;
    Printer p1;
    //Cambio para el primer commit (simulacion)    
    p1.printAdjacentMatrix(g1.getMatrix());

    return 0;
}
