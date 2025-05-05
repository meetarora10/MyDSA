#include<iostream>
#include<vector>
using namespace std;
int main(){
    // BC PI(N) || AC THETA(N^2) || WC O(N^2)
    vector<int> arr = {0,1,5,8,2};
    for(int i=0;i<arr.size();i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}