#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void merge(vector<int>&arr, int lo,int mid, int hi){
    vector<int> temp;
    int left = lo;
    int right = mid+1;
    while(lo<=mid && right<=hi){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=hi){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=lo;i<=hi;i++){
        arr[i]=temp[i-lo];
    }
}
void mergeSort(vector<int>&arr,int lo,int hi){
    if(lo>=hi) return;
    int mid = lo+(hi-lo)/2;
    mergeSort(arr,lo,mid);
    mergeSort(arr,mid+1,hi);
    merge(arr,lo,mid,hi);
}
int main(){
    vector<int> arr = {7,-1,2,-5,1,0};
    mergeSort(arr,0,arr.size()-1);
    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}