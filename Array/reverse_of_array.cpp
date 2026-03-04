// reverse of an array 
#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> arr={1,8,6,7,56,90};
    int n=arr.size();
    //cout<<n;
    for(int i=(n-1);i>=0;i--){
       cout<<arr[i]<<"   ";
    }
   cout<<endl; 
    
}