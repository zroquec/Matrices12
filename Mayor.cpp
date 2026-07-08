#include <iostream>
using namespace std;

int main(){
    int n,m,mayor;
    int matriz[100][100];
    cin>>n;
    cin>>m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriz[i][j];
        }
    }

    return 0;
}