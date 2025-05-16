#include<iostream>
#include<vector>
using namespace std;
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            if(nums[lo]==target){
                return lo;
            }else if(nums[hi]==target){
                return hi;
            }
            lo++;
            hi--;
        }
        return -1;
    }
int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int k=5;
    search(arr,k);
}