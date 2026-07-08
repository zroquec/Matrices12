#include <iostream>
using namespace std;

int main(){
    int m,n;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    cin>>m;
    cin>>n;

    cout<<"\nMatriz A"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }
    cout<<"\nMatriz B"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>B[i][j];
        }
    }

    return 0;
}