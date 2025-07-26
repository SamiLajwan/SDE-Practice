#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(vector<int>&a, vector<int>&b){
        int n = a.size();
        int m = b.size();
        int gap = (n + m + 1) / 2;

        while(gap > 0){
            int left = 0;
            int right = gap;

            while(right < n + m){
                // both pointers in a
                if(left < n && right < n){
                    if(a[left] > a[right]){
                        swap(a[left], a[right]);
                    }
                }
                // left in a, right in b
                else if(left < n && right >= n){
                    if(a[left] > b[right - n]){
                        swap(a[left], b[right - n]);
                    }
                }
                // both pointers in b
                else if(left >= n && right >= n){
                    if(b[left - n] > b[right - n]){
                        swap(b[left - n], b[right - n]);
                    }
                }
                left++;
                right++;
            }
            if(gap == 1) break;
            gap = (gap + 1) / 2;
        }
    }
};

int main(){
    Solution s;
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};
    s.merge(a,b);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}