// CS 271 - PA 7
// Program name: logTable.cpp
// Jingru Dou
// 1 April 2021

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int i;
    cout << setw(6) << "Number";
    cout << setw(15) << "Log base 2";
    cout << setw(16) << "Log base 10";
    cout << setw(14) << "Log base e" << endl;
    
    for(i = 1;i <= 100; i++) {
        cout << setw(4) << i << setw(15) << fixed << setprecision(3) << log2(i) << setw(15) << log10(i) << setw(15) << log(i) << endl;
    } // end for
    return 0;
} // end main
