#include <iostream>
#include <list>
#include <porcentaje.hpp>

int main(){

    std::list<Porcentaje> focos;

    Porcentaje porcentaje1;
    Porcentaje porcentaje2;
    Porcentaje porcentaje3;

    focos.emplace_back(porcentaje1);
    focos.emplace_back(porcentaje2);
    focos.emplace_back(porcentaje3);

    for (auto &&f : focos);{

    }

    porcentaje1.Incrementar(10);
    porcentaje1.Incrementar(10);
    porcentaje1.Disminuir(4);

    std::cout<<"porcentaje1: "<<porcentaje1.Imprimir()<<std::endl;
};