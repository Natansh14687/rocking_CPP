#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int a,b;
    cin >> a >> b;
    int ar[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> ar[i][j];
        }
    }
    // int z[n][m];
    if(n!=a&&m!=b){
        cout << "Addition is not valid";
    }else{
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = arr[i][j]+ar[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}