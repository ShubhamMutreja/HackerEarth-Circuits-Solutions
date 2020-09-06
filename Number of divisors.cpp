#include<iostream>
using namespace std;
typedef long ll;
int find(int n,int k)
{
    if(n%k != 0)
    {
        return n;
    }
    return find(n/k,k);
}
ll findSum(ll n) 
{ 
   return n*(n+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    int l = n/k; 
    
    ll ssum = findSum(l);
    ll nsum = findSum(n)-(k-1)*ssum;
    for(int i=k;i<=l;i+=k)
    {
        nsum += (find(i/k,k)-i);
    }
    cout<<nsum<<endl; 
    }
}
