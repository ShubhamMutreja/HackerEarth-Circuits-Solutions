#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll grid[1001][1001];
ll dp[1001][1001];
#define X 212072634227239451
ll recur(int m,int n,ll cost)
{
    if(m<0 || n<0)
    {
        return 0;
    }
    cost = ((cost%X)*(grid[m][n]%X))%X;
    if(cost == 0)
    {
        return 0;
    }
    if(m==0 && n==0)
    {
        return 1;
    }
    
    if(dp[m][n] != -1)
    {
        return dp[m][n]%1000000007;
    }
    return dp[m][n] = (recur(m-1,n,cost)%1000000007 + recur(m,n-1,cost)%1000000007)%1000000007;
} 
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll cost=1;
    memset(dp,-1,sizeof dp);
    ll k = recur(m-1,n-1,cost)%1000000007;  
    cout<<k; 
}
