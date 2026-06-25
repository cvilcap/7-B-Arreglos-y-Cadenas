#include <iostream>
using namespace std;
struct TIEMPO{
        int hora;
        int minutos;
        int segundos;
    };
int main(){
    TIEMPO TLL, TS;
     cin>>TLL.hora;
     cin>>TLL.minutos;
     cin>>TLL.segundos;
     cin>>TS.hora;
     cin>>TS.minutos;
     cin>>TS.segundos;
     cout<<"Tiempo de llegada: "<<TLL.hora<<":"<<TLL.minutos<<":"<<TLL.segundos<<endl;
     cout<<"Tiempo de salida: "<<TS.hora<<":"<<TS.minutos<<":"<<TS.segundos<<endl;
}