#include <bits/stdc++.h>
using namespace std;

int countCombinations(vector<int>& coins, int n, int target)
{
    vector < vector<int> > dp(n + 1, vector<int>(target + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= target; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (coins[i - 1] <= j)
            {
                dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[n][target];
}

int main()
{
    int n, target;
    cout << "Enter number of coins: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << "Enter target sum: ";
    cin >> target;
    int ways = countCombinations(coins, n, target);
    cout << "Number of ways to make the target sum: " << ways << endl;
    return 0;
}
