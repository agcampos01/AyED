#include <iostream>
#include <iomanip>

using namespace std;

static double PI = 3.141592;

double CalculoPi(){
    int i=1;
    int n=0;
    int x=0;
    double dato=0;
    while(1){
        x = n % 2 ? -1 : 1;                  //si el exponente es par x = 1, si es impar x = -1
        dato += x / (double)(2*n+1);
        n++;
        i++;
        if(abs(dato*4-PI)<0.0000001)
            break;
    }
    //cout<<"Iteraciones: "<< i <<"\tDato: "<< dato << endl;
    return dato*4;
}

int main(){
    cout<<setprecision(6)<<fixed;
    cout<<"Pi=\t"<< CalculoPi() << endl;
    return 0;
}
