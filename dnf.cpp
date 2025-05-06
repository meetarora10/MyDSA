#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,0,0,2,1,0};
    int lo = 0,mid=0,hi = arr.size()-1;
    while(mid<=hi){
        if(arr[mid]==0){
            swap(arr[lo++],arr[mid++]);
        }else if(arr[mid]==1) mid++;
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}