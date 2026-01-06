// Given a positive number N, design an algorithm to print the pattern as shown in the example below. 
// for N = 4
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i = 1; i<= n; i++){
    // for ith row print i elements

    // int num;
    // if(i%2 == 0){
    //     num = 0;
    // }
    // else{
    //     num = 1;
    // }
    int num = i % 2 == 0 ? 0 : 1;
    for(int j =1; j <= i; j++){
        cout<<num<<" ";
        // toggle num
        num = 1 - num;
    }
    cout<<endl;
}
}