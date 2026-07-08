#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    int suma[100][100];
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>suma[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum = sum+ suma[i][j];
        }
    }
    
    cout<<sum;
    return 0;
}