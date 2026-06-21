    #include <iostream>
    using namespace std;
    int main(){
        int P,n,v;
        int A[101]={0};
        cin>>P>>n;
        for(int i=0;i<n;i++){
            cin>>v;
            A[v]++;
        }
        for(int i=1;i<=P;i++){
            cout<<i<<"-"<<A[i]<<"\n";
        }
        return 0;
    }