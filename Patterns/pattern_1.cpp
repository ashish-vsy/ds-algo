// Given a positive number N, design an algorithm to print the pattern as shown below:
// for N = 4
// *
// **
// ***
// ****


#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		// for the ith row, print i stars
		int j = 1;
		while (j <= i) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}

	return 0;

}