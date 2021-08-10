#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> W(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> W[i];
        sum += W[i];
    }
    if (sum % 2)
    {
        cout << "impossible" << endl;
        return 0;
    }
    vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));
    dp[0][0] = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (!dp[i][j])
            {
                continue;
            }
            dp[i + 1][j] = true;
            dp[i + 1][j + W[i]] = true;
        }
    }
    if (dp[N][sum / 2])
    {
        cout << "possible" << endl;
    }
    else
    {
        cout << "impossible" << endl;
    }
}