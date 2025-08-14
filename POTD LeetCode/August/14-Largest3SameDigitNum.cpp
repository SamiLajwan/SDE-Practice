#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string largestGoodIntger(string num){
        int n=num.size();
        char maxChar = ' ';

        for(int i=2; i<n; i++){
            if(num[i]==num[i-1] && num[i] == num[i-2]){
                maxChar = max(maxChar, num[i]);
            }
        }
        if(maxChar == ' '){
            return "";

        }

        return string(3, maxChar);
    }
};

int main(){
    Solution s;
    string num;
    cin >> num;
    cout << s.largestGoodIntger(num) << endl;
    
    return 0;
}