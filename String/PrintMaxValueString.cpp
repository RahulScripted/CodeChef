// Given a strings vector consisting of digits from 0 to 9.return the  max value as a string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr[] ={"0123","0023","01801","0867"};
    int max = stoi(arr[0]);
    string MaxS = arr[0];
    for(int i = 1;i < 4;i++){
        int x = stoi(arr[i]);
        if(max < x){
            max = x;
            MaxS = arr[i];
        }
    }
    cout<<"The String which store max value : "<<MaxS;
}