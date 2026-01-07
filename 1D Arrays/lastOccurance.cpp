// Last Occurrence 
// Given an array of N integers, and an integer T, design an algorithm to find the index of the last occurrence of T in the given array. 
// note : output -1 if T is not present in the given array. 

#include<iostream>
using namespace std;

int main(){
    int arr[100];

    int n; cin>>n;

    for(int i =0; i <n; i++){
        cin>>arr[i];
    }
    int t; cin>>t;
    int i;
    for(i =n-1; i >= 0; i-- ){
        if(arr[i] == t){
            cout<<"last occurrence at index: "<<i<<endl;
            break;
        }
    }
    if(i<0){
        cout<<"-1"<<endl;
    }
}

// time = O(n)
// space = O(1)