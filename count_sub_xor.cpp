#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,6,7,8,9};
    int tar = 5;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        int xoor = 0;
        for(int j=i;j<arr.size();j++){
            xoor^=arr[j];
            if(xoor==tar) cnt++;
        }
    }
    cout<<cnt;
}