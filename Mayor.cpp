#include <iostream>
using namespace std;

int main(){
    int n,m,mayor,f=1,c=1;
    int matriz[100][100];
    cin>>n;
    cin>>m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriz[i][j];
        }
    }
    mayor=matriz[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mayor<matriz[i][j]){
                mayor=matriz[i][j];
                f=i+1;
                c=j+1;
            }
        }
    }
    cout<<"Mayor elemento es: "<<mayor<<endl;
    cout<<"fila: "<<f<<"columna: "<<c;
    return 0;
}