#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={7,-1,2,-5,1,0};
    int maxi = INT_MIN;
    int prefix = 0;
    int start = 0;
    int sId=-1, eId=-1;
    for(int i=0;i<arr.size();i++){
        if(prefix==0) start = i;
        prefix+=arr[i];
        if(prefix>maxi){
            maxi = prefix;
            sId = start;
            eId = i;
        }
        if(prefix<0) prefix = 0;
    }
    cout<<"Maximum sum is : "<<maxi<<endl;
    cout<<"Subarray is : "<<endl;
    for(int i=sId;i<=eId;i++){
        cout<<arr[i]<<" ";
    }
}