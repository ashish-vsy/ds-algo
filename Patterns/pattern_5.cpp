// Given a positive number N, design an algorithm to print the pattern as shown in the example below. 
// for n = 5
//     *
//    **
//   ***
//  ****
// *****

// so ith row has (n-i) spaces followed by i stars

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        // print n-i spaces

        for(int j=1; j <= n-i; j++){
            cout<<" ";
        }
        // print i stars
        for(int j =1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}