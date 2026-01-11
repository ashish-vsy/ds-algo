// Maximum Subarray Sum 

// Given an array of N integers, design an algorithm to find the maximum subarray sum. 


#include<iostream>
using namespace std;


void maxSumSubArray(int arr[], int n){
    int maxSofar = INT_MIN;
    for(int i =0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
           
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            // if(sum > maxSofar){
            //     maxSofar = sum;
            // }
            maxSofar = max(sum, maxSofar);
        }
        cout<<endl;
    }
    cout<<maxSofar<<endl;
}

int main(){
int n; 
cin>>n;

int arr[100];
for(int i =0; i < n; i++){
    cin>>arr[i];
}


 maxSumSubArray(arr, n);

    return 0;
}