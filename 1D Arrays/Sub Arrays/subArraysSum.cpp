// Generate Sub-Arrays 
// Given an array of N integers, design an algorithm to generate all of its sub-arrays. 
// Note : We define a sub-array of an array as a contiguous part of the given array. 

#include<iostream>
using namespace std;

void generateSubArrays(int arr[], int n){
    for(int  i = 0; i <n ; i++){


        for(int j = i; j < n; j++){

			// generate the subarray that starts at
			// the ith idx and ends at the jth idx
            cout<<i<<" "<<j<<" : ";
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int n; cin>>n;

    int arr[100];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    generateSubArrays(arr, n);
    return 0;
}

// time : O(n^3)