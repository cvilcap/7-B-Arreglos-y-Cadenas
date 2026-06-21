#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        char A[1001];
        cin>>A;
        int l=0;
        while(A[l]!='\0'){
            l++;
        }
        bool esPalindromo=true;
        int izquierda=0;
        int derecha=l-1;
        while(izquierda<derecha){
            if(A[izquierda]!=A[derecha]){
                esPalindromo=false;
                break;
            }
            izquierda++;
            derecha--;
        }
        if(esPalindromo==true){
            cout<<"P"<<endl;
        } 
        else{
            cout<<"NP"<<endl;
        }
    }
    return 0;
}