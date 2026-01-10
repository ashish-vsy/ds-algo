// Insertion Sort 

// Given an array of  N integers, sort the array using the insertion sort algorithm. 

#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){

  

// The insertion sort algorithm works in passes such that in its each pass,
//  we place the first element in the un-sorted part of 
// the array to its correct position in the sorted part of the array. 
    for(int i = 1; i < n; i++){
        int key = arr[i];


        int j = i-1;
       	while (j >= 0 and key < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
    }
}

int main(){

    int arr[100];
    int n; cin>>n;

    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}