#include <iostream>
using namespace std;

int main(){
    int f,c,sum=0;
    int suma[100][100];
    cin>>f;
    cin>>c;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cin>>suma[i][j];
        }
    }

    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            sum = sum+ suma[i][j];
        }
    }
    
    cout<<sum;
    return 0;
}