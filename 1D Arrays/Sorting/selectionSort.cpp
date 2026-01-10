// Selection Sort 

// Given an array of  N integers, sort the array using the selection sort algorithm. 

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){

        // in the ith pass, place the smallest element in the
		// unsorted part of the arr[] to its correct position
		// i.e. ith index

        int minIdx = i; // at the start of the ith pass, assume value at the ith index is the smallest
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}
int main(){
    int arr[100];
    int n; cin>>n;

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    selectionSort(arr, n);
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}