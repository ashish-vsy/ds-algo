// Given a positive number N, design an algorithm to print the pattern as shown in the example below. 
// for n = 5
//     1
//    232
//   34543
//  4567654
// 567898765

// if we divide the pattern into two halves, 
// we can see first will look something like this:  1
//                                                 23
//                                                345
//                                               4567
//                                              56789
// and the second half will look something like this:  (nothing)
//                                                2
//                                                43
//                                                654
//                                                8765

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i =1; i <= n; i++){

        // print n-i spaces
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }  
        // num = i,  i in inc. order
        
        int num = i;
        for(int j = 1; j <= i; j++){
            cout<<num;
            num++;
        }
        // num = 2*i -2, i in dec. order
        num = 2*i -2;
        for(int j =1; j <= i-1; j++){
            cout<<num;
            num--;
        }
        cout<<endl;
    }
    return 0;
}
