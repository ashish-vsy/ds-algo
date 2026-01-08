// Rotate Array 
// Given an array of N integers, design an algorithm to rotate the array once in the clockwise direction. 


#include<iostream>

using namespace std;

int main() {

	int arr[100];
	// int n = sizeof(arr) / sizeof(int);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

	//time : O(n)
	for (int i = n - 1; i >= 1; i--) {
		swap(arr[i],arr[i - 1]);
	}

	for (int i =0; i <n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}