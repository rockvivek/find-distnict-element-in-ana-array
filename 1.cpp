#include <iostream>
#include<unordered_set>

using namespace std;

int main() {
    int count = 0;
    unordered_set<int> us;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ;i<n;i++){
        if(us.find(arr[i])==us.end()){
            us.insert(arr[i]);
            count++;
        }
    }
    cout<<count<<endl;
	return 0;
}