#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> arr={1,2,3,6,7,5,7};
    int n=arr.size();
    unordered_map<int,int> mp;
    int ele;
    int sum=0;
    int orSum = (n*(n+1))/2;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second==2){
            ele=i.first;
            cout<<ele<<endl;
            break;
        }
    }
    cout<<orSum-(sum-ele)<<endl;
}