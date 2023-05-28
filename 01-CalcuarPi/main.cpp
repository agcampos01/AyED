#include <iostream>

using namespace std;

long double CalculoPi(){
    int n=0;
    int x=0;
    long double dato=0;
    long double aux;
    for(int i=1; i<5000000 ;i++){
        x = n % 2 ? -1 : 1;     //si el exponente es par x = 1, si es impar x = -1
        aux = 2*n+1;
        dato += x / aux;    //Uso aux porque no me funciona de esta forma --> dato += x / (2*n+1);
        n++;
        //cout<< i <<"\t"<< dato*4 << endl;
    }
    return dato*4;
}

int main(){
    cout.precision(7);
    //CalculoPi();
    cout<<"Pi=\t"<< CalculoPi() << endl;
    return 0;
}