// Write a C++ program where given a sentence you have to print words in new line.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Rahul Goswami is a good programmer";
    stringstream ss(str);
    string temp;
    while(ss >> temp){
        cout<<temp<<endl;
    }
}