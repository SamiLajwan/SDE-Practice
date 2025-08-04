#include<bits/stdc++.h>
using namespace std;


class solution{
    public:
    int totalFruits(vector<int>&fruits){
        int n=fruits.size();
        unordered_map<int,int>mp;
        int i=0,j=0,count=0;

        while(j<n){
            mp[fruits[j]]++;

            if(mp.size()<=2){
                count=max(count,j-i+1);
            }
            else{
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
            }
            j++;
        }
        return count;
    }
    
    
};


int main(){
    solution s;
    vector<int> fruits = {1,2,3,2,2,4,4,4,4};

    int finalAns = s.totalFruits(fruits);
    cout << "finalAns is: " << finalAns << endl;

    return 0;
}