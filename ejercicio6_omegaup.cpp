#include <iostream>
using namespace std;
int main(){
    char linea[99];
    char letras[99];
    char temp;
    int len = 0;
    int cantidad = 0;
    char c;
    cin>>noskipws;//para ignorar los espacios en blanco
    cin>>c;//para leer el primer caracter
    while(c!='\n'){
        linea[len]=c;
        len=len+1;
        cin>>c;
    }
    for(int i=0;i<len;i++){
        if(linea[i]>='a' && linea[i]<='z'){
            letras[cantidad]=linea[i];
            cantidad=cantidad+1;
        }
    }
    for(int i=0;i<cantidad-1;i++){
        for(int j=0;j<cantidad-1-i;j++){
            if(letras[j]>letras[j+1]){
                temp=letras[j];
                letras[j]=letras[j+1];
                letras[j+1]=temp;
            }
        }
    }
    int k=0;
    for(int i=0;i<len; i++){
        if(linea[i]>='a' && linea[i]<='z'){
            linea[i]=letras[k];
            k=k+1;
        }
    }
    for(int i=0; i<len; i++){
        cout<<linea[i];
    }
    cout<<endl;
    return 0;
}