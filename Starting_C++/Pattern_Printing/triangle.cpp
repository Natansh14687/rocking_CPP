// Printing equilateral triangle using pattern printing.
#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout << "Enter the number of rows you wanna print : ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout << " ";
            }
            for (int k = 1; k <= 2*i-1; k++){
                cout << "*";
            }
            cout << endl;
        }
    
    return 0;
}