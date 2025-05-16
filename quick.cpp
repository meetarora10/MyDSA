#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int> &arr,int lo,int hi){
    cout<<"Entered partition"<<endl;
    int pos = lo;
    for(int i=lo;i<=hi;i++){
        if(arr[i]<=arr[hi]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;

}
void quick(vector<int> &arr,int lo,int hi){
    if(lo>=hi) return;
    cout<<"Entered quick"<<endl;
    int pivot = partition(arr,lo,hi);
    quick(arr,lo,pivot-1);
    quick(arr,pivot+1,hi);
}
int main(){
    vector<int> arr = {1, 2, 1, 3, 4, 5};
    quick(arr,0,arr.size()-1);
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
