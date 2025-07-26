#include<bits/stdc++.h>
using namespace std;

class solution{
    public: 
    bool isPalindrome(string &s){
       int n = s.length();
        int i =0, j=n-1;

        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
};

int main(){
    solution s;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if(s.isPalindrome(str)){
        cout << "The string is a palindrome," << endl;
    }
    else{
         cout << "The string is not a palindrome." << endl;
    
        }
    return 0;
}