#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    pair<int,int> minmax(vector<int> &arr){

        int n = arr.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            if(arr[i]<mini){
                mini = arr[i];
            }
            if(arr[i]>maxi){
                maxi = arr[i];
            }
        }
        return {mini, maxi};
    }
};

int main(){
    solution s;
    vector<int> arr = {1,3,4,4,5,5,76,7,686};
    int n = arr.size();

    pair<int, int> ans = s.minmax(arr);
    cout << "Minimum: " << ans.first << " Maximum: " << ans.second << endl;
    return 0; 
}