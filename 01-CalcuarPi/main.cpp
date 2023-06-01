#include <iostream>
#include <iomanip>

using namespace std;

static double PI = 3.141592;

double CalculoPi(){
    int n=0;
    int x=0;
    double dato=0;
    for(int i=1; i<1000000 ;i++){
        x = n % 2 ? -1 : 1;                  //si el exponente es par x = 1, si es impar x = -1
        dato += x / (double)(2*n+1);
        n++;
    }
    //cout<<"Iteraciones: "<< n+1 <<"\tDato: "<< dato << endl;
    return dato*4;
}

int main(){
    cout<<setprecision(6)<<fixed;
    //cout<<"PI= "<< PI <<"\t PI/4= "<<  (PI/4) << endl;
    cout<<"Pi=\t"<< CalculoPi() << endl;
    return 0;
}
