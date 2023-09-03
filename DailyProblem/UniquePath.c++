#include <bits/stdc++.h>
using namespace std;

int dp[101][101]{};
    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);
    }

int main()
{
    int ans = uniquePaths(3 , 7  );
    cout << " No. of Unique Paths Are = " << ans << endl;
    
    return 0;
}

