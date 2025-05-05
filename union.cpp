#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {2,3,4,5};
    vector<int> ans;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            if(ans.size()==0 || ans[ans.size()-1]!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }else{
            if(ans.size()==0 || ans[ans.size()-1]!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<arr1.size()){
        if(ans.size()==0 || ans[ans.size()-1]!=arr1[i]){
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while(j<arr2.size()){
        if(ans.size()==0 || ans[ans.size()-1]!=arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}