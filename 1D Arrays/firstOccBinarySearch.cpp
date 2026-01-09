// First Occurrence in Sorted Array 

// Given a sorted array of N integers, & an integer T, design an algorithm to find
//  the index of the 1st occurrence of T in the given array. 
// You've to output -1 if T isn't present in the array.

#include<iostream>
using namespace std;

void binary_search(int arr[], int n , int t){
    int s =0, e= n-1;

    int ans = -1;
    while(s <=e){
        // int mid = (s+e)/2;
        int mid = s + (e - s)/2;
        if(arr[mid] == t){
            ans = mid;
            e =mid -1; // look for left side
        }
        else if(arr[mid] < t){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    cout<<ans<<endl;
}
int main(){

    int arr[100000];
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int t; cin>>t;
    binary_search(arr, n, t);
    return 0;
}