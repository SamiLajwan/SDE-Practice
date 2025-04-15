#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    int n=nums.size();

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        int remaining = target - nums[i];

        if(mp.find(remaining) != mp.end()){
            return {mp[remaining], i};
        }

        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: " << result[0] << " & " << result[1] << endl;

    return 0;
}