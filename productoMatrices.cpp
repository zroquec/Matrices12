#include <iostream>
using namespace std;

int main(){
    int m,n,p;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    cin>>m;
    cin>>n;
    cin>>p;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cin>>A[i][j];  
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
          cin>>B[i][j];  
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            C[i][j]=0;
            for(int k=0; k<n; k++){
                C[i][j]=C[i][j]+(A[i][j]*B[i][j]);
            }
        }
    }

    return 0;
}