#include<iostream>
#include<vector>
using namespace std;

class Solution {

public:
    int res;
    int strStr(string s, string t)
    {
        int n = s.size(), m = t.size();
        if (n < m) return 0;
        vector < vector<int> >dp(n, vector<int>(m, -1));
        return dfs(n - 1, m - 1, s, t, dp);
            
        
    }

    int dfs(int i, int j, string& s, string& t, vector<vector<int>>& dp) {
        if (j < 0)return 1;
        if (i < 0)return 0;
        if (dp[i][j] >= 0) return dp[i][j];
         res = dfs(i - 1, j, s, t, dp);
        if (s[i] == t[j]) res += dfs(i - 1, j - 1, s, t,  dp);
        return dp[i][j] = res;

    }
};

int main2() {
    string s,t;
    cin >> s;
    cin >> t;

   Solution sol;
   int a =sol.strStr(s, t);
   
   cout << a << endl;

}
