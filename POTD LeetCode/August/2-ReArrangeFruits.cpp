#include<bits/stdc++.h>
using namespace std;


class solution{
    public:
        long long minCost(vector<int>&basket1, vector<int>&basket2 ){
            unordered_map<int,int>mp;
            int minEl = INT_MAX;

            for(int &x : basket1){
                mp[x]++;
                minEl = min(minEl, x);
            }

            for(int &x: basket2){
                mp[x]--;
                minEl = min(minEl, x);
            }

            vector<int> fruitsStore;

            for(auto &it: mp){
                int cost = it.first;
                int count = it.second;

                if(count == 0){
                    continue;
                }

                if(count%2 != 0){
                    return -1;
                }

                for(int c=1; c<=abs(count)/2; c++){
                    fruitsStore.push_back(cost);
                }
            }
            //fruitsStore ke first half ko use krnege, cost cal krne k liye
            //iske liye full list sort krne ki jroort nhi, nth elemnt ka use kro

            nth_element(begin(fruitsStore), begin(fruitsStore)+fruitsStore.size()/2, end(fruitsStore));

            long long result = 0;

            for(int i=0; i<fruitsStore.size()/2; i++){
                result += min(fruitsStore[i], minEl*2);
            }
            return result;
        }
    
};


int main(){
    solution s;
    vector<int>basket1 = {4,2,2,2,7,7,7,8,8,8};
    vector<int>basket2 = {9,4,9,2,7,8,5,5,1,1};
    // Example input
    // basket1 = {4, 2, 2, 2, 7, 7, 7, 8, 8, 8}
    // basket2 = {9, 4, 9, 2, 7 , 8, 5, 5, 1, 1}
    long long result = s.minCost(basket1, basket2);
    cout << "MiniMum Cost: " << result << endl; // Output: 5

    return 0;
}