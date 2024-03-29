// Given two numbers, write a program to print all the prime numbers present between these two numbers...
#include<iostream>
using namespace std;

bool isPrime(int num){
    for (int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int i=num1; i<=num2; i++){
        if (isPrime(i)) cout << i << endl;
    }
    return 0;
}
