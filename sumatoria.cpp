#include <iostream>
using namespace std;

int main(){
    int f,c;
    int suma[100][100];
    cin>>f;
    cin>>c;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cin>>suma[i][j];
        }
    }

    return 0;
}