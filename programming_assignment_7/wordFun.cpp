// CS 271 - PA 7
// Program name: wordFun.cpp
// Jingru Dou
// 1 April 2021

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 25;
// Declaring the variables
    string words[SIZE], str;
    int cnt = 0;
  
// Getting the input entered by the user
    cout << "Type a word (press Ctrl-D to quit):";
    while(cnt < 25 && cin >> str){
        words[cnt] = str;
        cnt++;
        if(cnt < 25)
            cout << "Type a word (press Ctrl-D to quit):";
    } // end while
    cout << endl;

    
//Displaying the output
    for(int i = 0;i < cnt; i++){
        cout << words[i] << endl;
        for(int j = 0;j < words[i].length(); j++){
            cout << words[i].at(j) << endl;
       } // end for
       cout << endl;
    } // end for
    return 0;
} // end main
