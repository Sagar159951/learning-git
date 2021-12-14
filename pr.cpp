#include <bits/stdc++.h>
using namespace std;
 
int min(int x, int y, int z) { return min(min(x, y), z); }
 
int topdown(string s1, string s2, int m, int n)
{
    int memo[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            
            if (i == 0){
                memo[i][j] = j; 
            }
            else if (j == 0){
                memo[i][j] = i; 
            }
            else if (s1[i - 1] == s2[j - 1]){
                memo[i][j] = memo[i - 1][j - 1];
            }
            else{
                memo[i][j] = 1 + min(memo[i][j - 1], memo[i - 1][j], memo[i - 1][j - 1]); 
            }
        }
    }
    return memo[m][n];
}
 
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    cout << topdown( s1, s2, s1.length(), s2.length());
    return 0;
}