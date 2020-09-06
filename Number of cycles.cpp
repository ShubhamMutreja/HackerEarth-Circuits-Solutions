#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q)
    {
        ll n;
        cin>>n;
        n++;
        ll ans = n*n - 3*n + 3;
        cout<<ans<<endl;
    }
}