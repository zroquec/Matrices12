#include <iostream>
using namespace std;

int main(){
    int k, m, n;
    int A[100][100];
    int P[100][100];
    cin>>k;
    cin>>m;
    cin>>n;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }
    return 0;
}