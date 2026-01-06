// Given a positive number N, design an algorithm to print the pattern as shown in the example below. 
// for N = 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    int count = 1; // to keep track of the current number to print
    while (i <= n){
        
        // for the ith row, print i numbers
        int j = 1;
        while (j <= i){
            cout << count << " ";
            count++; // increment the number to be printed next
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;

}
