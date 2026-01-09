// Count Occurrences in Sorted Array 

// Given a sorted array of N integers, & an integer T, design an algorithm to count the total no. of the occurrences of T in the given array.
//  You've to output -1 if T isn't present in the array.

#include<iostream>
using namespace std;

void count_occ(int arr[], int n, int t){
   // last occurance - first occurance + 1
    int s =0, e = n-1;

    int first = -1;
    // first occurance
    while(s <= e){
        int mid = s + (e - s)/2;
        if(arr[mid] == t){
            first = mid;
            e = mid -1; //look for left side
        }
        else if(arr[mid] < t){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    if(first == -1){
        cout<<-1<<endl;
        return;
    }

    s =0; e = n-1;
    int last = -1;
    // last occurance
    while(s <= e){
        int mid = s + (e - s)/2;
        if(arr[mid] == t){
            last = mid;
            s = mid +1; //look for right side
        }
        else if(arr[mid] < t){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    cout<<(last - first + 1)<<endl;
      
    
}
int main(){

    int arr[100000];
    int n; cin>>n;

    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    int t; cin>>t;
    count_occ(arr, n , t);
    return 0;
}