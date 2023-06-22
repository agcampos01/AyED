#include <iostream>
#include <iomanip>

using namespace std;

double CalculoPi(){
    int cont=1;                              //Contador de iteraciones
    int n=0;
    int x=0;
    double dato=0;
    double aux=0;
    while(1){
        x = n % 2 ? -1 : 1;                  //si el exponente es par x = 1, si es impar x = -1
        dato += x / (double)(2*n+1);
        n++;
        cont++;
        if((abs(dato-aux))*4<0.000001)
            break;
        else
            aux=dato;
    }
    //cout<<"Iteraciones: "<< cont <<"\tDato: "<< dato << endl;
    return dato*4;
}

int main(){
    cout<<setprecision(6)<<fixed;
    cout<<"Pi=\t"<< CalculoPi() << endl;        //El resultado se redondea y no se cómo cancelarlo :(
    return 0;
}
