#include<stack>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 1, 3, 4, 5};
    int n =arr.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    cout<<endl;
    cout<<"Next greater element is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}