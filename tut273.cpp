#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,3,3,3};
    int i=0;
    for(int j=1;j<6;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    int newSize = i+1;
    cout<<"New size :"<<i+1<<endl;
    for(int k=0;k<newSize;k++){
        cout<<arr[k]<<" ";
    }
}