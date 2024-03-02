#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
map<ll,bool>mp;
bool is_n(ll cur,ll n)
{
    if(cur == n)
        return true;
    if(cur > n)
        return false;
    if(mp.find(cur)!= mp.end())
        return mp[cur];
    bool op1 = is_n(cur*10,n);
    bool op2 = is_n(cur*20,n);
    return mp[cur] = op1||op2;
}
void solve()
{
    ll n;
    cin>>n;
    mp.clear();
    if(is_n(1,n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
 
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}