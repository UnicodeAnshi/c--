#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cursum=0,maxsum=0;
        for(int i=0;i<k;i++){
            cursum+=nums[i];//window to calculate first sum
        }
        maxsum=cursum/k;
        for(int i=k; i< nums.size();i++){
            cursum+=nums[i]-nums[i-k];
            maxsum=max(maxsum,cursum/k);//sliding the window to get the maximum subarray
        }
        return maxsum;
    }
};
