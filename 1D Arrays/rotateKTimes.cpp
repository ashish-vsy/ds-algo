// n, k <= 1e5
// 1e8 ~ 1s

// Given an array of N integers, and an integer K, design an algorithm to rotate the array K times in the clockwise direction.


#include<iostream>
using namespace std;

int main(){

    // reverse the entire array
    // reverse the first k elements
    // reverse the remaining n-k elements


    int arr[100000];   
     int n; cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k; cin>>k;

    int i= 0, j=n-1;
    while(i <j) {
        swap(arr[i],arr[j]);
         i++;
           j--;
    }

    i=0,  j=k-1;
    while(i< j){
        swap(arr[i],  arr[j]);
          i++;
           j--;
    }

    i=k,j=n-1;
    while(i<j){
        swap( arr[i] , arr[j]);
         i++;
         j--;
    }

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
     cout<<endl;

    return 0;
}