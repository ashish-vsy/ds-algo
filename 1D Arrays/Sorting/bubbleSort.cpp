// Bubble Sort 
// Given an array of  N integers, sort the array using the bubble sort algorithm. 


#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
     // The bubble sort algorithm works in passes such that in its each pass, 
    // we place the  largest  element in the un-sorted part of the array to its correct position. 
    for(int i = 0; i <n ; i++){

        // we will take a flag, if array is sorted, we can stop in forst pass only

        bool flag = false;
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }

    }
}

int main(){
    int arr[100];
    int n; cin>>n;

    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
   bubbleSort(arr, n);

    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}