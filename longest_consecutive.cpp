#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={100,200,1,4,5,2,3};
    int lastSmall = INT_MIN;
    int cnt = 0;
    int maxCnt = 1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1+lastSmall){
            cnt+=1;
            lastSmall=arr[i];
        }else if(arr[i]!=lastSmall){
            cnt=1;
            lastSmall=arr[i];
        }
        maxCnt = max(maxCnt,cnt);
    }
    cout<<maxCnt<<endl;
}