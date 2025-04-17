#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
    int n=nums.size();

    int i=0, j=1;

    while(j<n){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;

    }
    return i+1;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,3,4,4,5};
    int Ans = removeDuplicates(nums);

    cout << "The length of the array after removing duplicates is: " << Ans << endl;
    return 0;
}