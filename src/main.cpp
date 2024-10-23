#include<SerieNavidad.hpp>

int main(int argc, char const *argv[]){
    
    SerieNavidad s1(10);
    s1.Encender();
    s1.Imprimir();
    
    SerieNavidad s2(5);
    s2.Encender();
    s2.Imprimir();

    SerieNavidad s3(15);
    s3.Encender();
    s3.Imprimir();
    
    return 0;
};