#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    int M = 1e9+7;

    vector<int> productQueries(int n, vector<vector<int>> &queries){
        vector<int>powers;
        vector<int> result;

        //BUild Powers Array
        for(int i=0; i<32; i++){
            if((n & (1<<i)) != 0){//ith bit is set bit
                powers.push_back(1<<i);
            }
        }

        for(auto &query : queries){
            int start = query[0];
            int end = query[1];

            long product = 1;

            for(int i=start; i<= end; i++){
                product = (product * powers[i])%M;
            }
            result.push_back(product);
        }
        return result;
    }
};

int main(){
    solution s;
    int n, q;
    cout << "Enter value of n: " << endl;
    cin >> n;
    cout << "Enter number of queries: " << endl;
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(2));
    cout << "Enter queries (start end): " << endl;
    for(int i=0; i<q; i++){
        cin >> queries[i][0] >> queries[i][1];
    }
    vector<int> result = s.productQueries(n, queries);
    cout << "Results: " << endl;
    for(auto &res : result){
        cout << res << " ";
    }
    cout << endl;
    cout << "Done." << endl;
    return 0;
}