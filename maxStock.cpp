#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr={7,4,2,0};
    int mini = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<arr.size();i++){
        mini = min(mini,arr[i]);
        maxProfit = max(maxProfit,arr[i]-mini);
    }
    cout<<maxProfit;
}