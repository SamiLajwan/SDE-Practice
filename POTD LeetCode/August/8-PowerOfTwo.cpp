#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPowerofTwo(int n){
        if(n<=0) return false;
        if(n==1) return true;

        return n%2==0 && isPowerofTwo(n/2);
    }

};

int main(){
    Solution s;
    int n;
       cout << "Enter the value of n " << endl;

    cin >> n;


   if(s.isPowerofTwo(n)){
    cout << "Yes it is Divisible" << endl;
   }
   else{
    cout << "Not, Sorry!" << endl;
   }

    return 0;
}