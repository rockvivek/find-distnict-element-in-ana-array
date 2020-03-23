#include <iostream>
#include<unordered_set>

using namespace std;

// a c++ program for find the freqencies of different elements of an array....
int main() {
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int> um;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ;i<n;i++){
        um.insert(arr[i]);
    }
    cout<<um.size()<<endl;
	return 0;
}