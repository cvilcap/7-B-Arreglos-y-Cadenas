#include <iostream>
using namespace std;
int main(){
	int N,C,v[1000001];
	cin>>N>>C;
	for(int i=0;i<C;i++){
		int nv;
		cin>>nv;
		v[nv]++;
	}
	for(int i=1;i<=N;i++){
		cout<<v[i]<<endl;
	}
	return 0;
}