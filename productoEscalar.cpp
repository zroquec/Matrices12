#include <iostream>
using namespace std;

int main(){
    int k, m, n;
    int A[100][100];
    int P[100][100];
    cout<<"Ingrese el valor del escalar (k): ";
    cin>>k;
    cout<<"Ingrese la cantidad de filas (m):";
    cin>>m;
    cout<<"Ingrese la cantidad de columnas (n):";
    cin>>n;
    
    cout<<"\n--- Llenado de la Matriz A ---"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            P[i][j] = k*A[i][j];
        }
    }
    cout<<"\n--- Matriz resultante P ---"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<P[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}