#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,0,1,2,0,3};
    int k=-1;  // place k to first 0
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            k=i;
            break;
        } 
    }
    for(int j=k+1;j<arr.size();j++){
        if(arr[j]!=0){
            swap(arr[k],arr[j]);
            k++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}