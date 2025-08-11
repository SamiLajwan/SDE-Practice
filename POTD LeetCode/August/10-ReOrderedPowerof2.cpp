#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string getSortedStr(int n){
        string s = to_string(n);
        sort(begin(s), end(s));
        return s;
    }

    bool reOrderedPowerOf2(int n){
        string s = getSortedStr(n);

        //check all two's power and see if it matched with 
        for(int p=0; p<=29; p++){
            if(s == getSortedStr(1<<p)){

                return true;
            }
        }
        return false;
    }

};

int main()
{
    Solution s;
    int n;
    cout << "Enter value: " << endl;
    cin >> n;

    if(s.reOrderedPowerOf2(n)){
        cout << "True." << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}